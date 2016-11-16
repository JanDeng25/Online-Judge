#include <iostream>
#include <queue>
using namespace std;
struct node {
	node* next;
	int num;
};
int main() {
	int n, m;
	cin >> n >> m;
	node* head = new node[n];
	for (int i = 0; i < n; i++)
		head[i].next = NULL;
	for (int i = 0; i < m; i++) {
		int id, k;
		cin >> id >> k;
		node *cur_node = &head[id - 1];
		for (int j = 0; j < k; j++) {
			node * tmp = new node[1];
			cin >> tmp->num;
			tmp->next = NULL;
			cur_node->next = tmp;
			cur_node = tmp;
		}
	}
	queue<node> q;
	if (head[0].next == NULL) {
		cout << 1 << endl;
		return 0;
	}
	q.push(head[0]);
	while (!q.empty()) {
		int leaf_no = 0;
		int size = q.size();
		for (int i = 0; i < size; i++) {
			node tmp = q.front();
			if (tmp.next == NULL) {
				leaf_no++;
				q.pop();
			}
			else {
				q.pop();
				node * next_node = tmp.next;
				while (next_node != NULL) {
					q.push(head[next_node->num - 1]);
					next_node = next_node->next;
				}
			}
		}
		if (q.empty())
			cout << leaf_no << endl;
		else
			cout << leaf_no << ' ';
	}
	return 0;
}