#include <iostream>
#include <algorithm>
#include <string>

#define MAX 501
#define INF 9999999
using namespace std;

int n, m, c1, c2;
int dist[MAX][MAX];
int amount[MAX], team[MAX], shortest_dist[MAX], path_num[MAX];
bool visit[MAX];

void dijkstra(int a) {
	visit[a] = true;
	shortest_dist[a] = 0;
	amount[a] = team[a];
	int next = a;
	while (next != c2) {
		for (int i = 0; i < n; i++) {
			if (visit[i] == false) {
				if (shortest_dist[i] > shortest_dist[next] + dist[next][i]) {
					shortest_dist[i] = shortest_dist[next] + dist[next][i];
					amount[i] = amount[next] + team[i];
					path_num[i] = path_num[next];
				}
				else if (shortest_dist[i] == shortest_dist[next] + dist[next][i]) {
					path_num[i] += path_num[next];
					if (amount[i] < amount[next] + team[i])
						amount[i] = amount[next] + team[i];
				}
			}
		}
		int distmin = INF;
		for (int i = 0; i < n; i++) {
			if (visit[i] == false && shortest_dist[i] < distmin) {
				distmin = shortest_dist[i];
				next = i;
			}
		}
		visit[next] = true;
	}
}
int main() {

	int a1, a2, l;
	cin >> n >> m >> c1 >> c2;
	for (int i = 0; i < n; i++)
		cin >> team[i];
	for (int i = 0; i < n; i++) {
		shortest_dist[i] = INF;
		path_num[i] = 1;
		visit[i] = false;
		for (int j = 0; j < n; j++)
			dist[i][j] = INF;
	}
	for (int i = 0; i < m; i++) {
		cin >> a1 >> a2 >> l;
		dist[a1][a2] = dist[a2][a1] = l;
	}
	dijkstra(c1);
	cout << path_num[c2] << ' ' << amount[c2] << endl;
	return 0;
}