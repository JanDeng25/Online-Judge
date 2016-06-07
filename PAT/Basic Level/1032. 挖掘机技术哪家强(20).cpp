#include <iostream>
#include <unordered_map>
using namespace  std;
int main(){
	int n;    cin >> n;
	unordered_map<int,int> sum;
	int school, score;
	for(int i = 0; i < n; i++){
		
		cin >> school >> score;
		sum[school] += score;
	}
	unordered_map<int, int>::iterator itr = sum.begin();
	school = itr->first;    score = itr->second;
	itr++;
	for(itr; itr != sum.end(); itr++){
		if(itr->second > score)
		{
			school = itr->first;
			score = itr->second;
		}
	}
	cout << school << ' ' << score << endl;
	return 0;
}