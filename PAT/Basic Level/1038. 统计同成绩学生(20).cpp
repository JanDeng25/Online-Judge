#include <cstdio>
//#include <string>
//#include <unordered_map>
using namespace std;
int main() {
	int score[101] = { 0 };
	int N, K;
	scanf("%d", &N);
	int a;
	for(int i = 0; i < N; i ++) {
		scanf("%d", &a);
		if(0 <= a && a <= 100)
		    score[a] ++;
	}
	scanf("%d", &K);
	for (int i = 0; i < K; i++) {
		scanf("%d", &a);
		if (i)
			printf(" %d",score[a]);
		else
			printf("%d", score[a]);
	}
	return 0;
}