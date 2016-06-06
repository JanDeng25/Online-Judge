#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
//#include <string>
//#include <cmath>
using namespace std;
int L, H;
class stu{
public:
	int id;
	int de;
	int cai;
	bool operator < (stu s){
		int sum1 = de + cai;
		int sum2 = s.de + s.cai;
		return sum1 > sum2 || (sum1 == sum2 && de > s.de) || (sum1 == sum2 && de == s.de && id < s.id); 
	}
};
/*bool cmp(stu s1, stu s2){
	int sum1 = s1.de + s1.cai;
	int sum2 = s2.de + s2.cai;
	return sum1 > sum2 || (sum1 == sum2 && s1.de > s2.de) || (sum1 == sum2 && s1.de == s2.de && s1.id < s2.id); 
}*/
int main(){
	int N, num = 0;
	cin >> N >> L >> H;
	vector<stu> stus1, stus2, stus3, stus4;
	stu temp;
	for(int i = 0; i < N; i++){
		//cin >> temp.id >> temp.de >> temp.cai;
		scanf("%d%d%d",&temp.id, &temp.de, &temp.cai);
		//cout << temp.id << temp.de << temp.cai << endl;
		if(temp.de >= L && temp.cai >= L){
			num ++;
			if(temp.de >= H && temp.cai >= H)
				stus1.push_back(temp);
			else if(temp.de >= H && temp.cai < H)
				stus2.push_back(temp);
			else if(temp.de < H && temp.cai < H && temp.de >= temp.cai)
				stus3.push_back(temp);
			else 
				stus4.push_back(temp);
		}
	}
	/*sort(stus1.begin(), stus1.end(), cmp);
	sort(stus2.begin(), stus2.end(), cmp);
	sort(stus3.begin(), stus3.end(), cmp);
	sort(stus4.begin(), stus4.end(), cmp);*/

	sort(stus1.begin(), stus1.end());
	sort(stus2.begin(), stus2.end());
	sort(stus3.begin(), stus3.end());
	sort(stus4.begin(), stus4.end());

	cout << num << endl;
	for(int i = 0; i < stus1.size(); i++)
		//cout << stus1[i].id << ' ' << stus1[i].de << ' ' << stus1[i].cai << endl;
		printf("%d %d %d\n", stus1[i].id, stus1[i].de, stus1[i].cai);
	for(int i = 0; i < stus2.size(); i++)
		//cout << stus2[i].id << ' ' << stus2[i].de << ' ' << stus2[i].cai << endl;
		printf("%d %d %d\n", stus2[i].id, stus2[i].de, stus2[i].cai);
	for(int i = 0; i < stus3.size(); i++)
		//cout << stus3[i].id << ' ' << stus3[i].de << ' ' << stus3[i].cai << endl;
		printf("%d %d %d\n", stus3[i].id, stus3[i].de, stus3[i].cai);
	for(int i = 0; i < stus4.size(); i++)
		//cout << stus4[i].id << ' ' << stus4[i].de << ' ' << stus4[i].cai << endl;
		printf("%d %d %d\n", stus4[i].id, stus4[i].de, stus4[i].cai);
	return 0;
}