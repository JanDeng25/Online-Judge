#include <iostream>
#include <string>
#include <map>
using namespace  std;
bool win(char a, char b){
	return (a == 'C' && b == 'J') || (a == 'J' && b == 'B') || (a == 'B' && b == 'C');
}
int main(){
	int n;    cin >> n;
	char ch[] = {'B','C','J'};
	int winA = 0, tie = 0, loseA = 0;
	int win_mostA[3] = {0},win_mostB[3] = {0};
	char a, b;
	for(int  i = 0; i < n; i++){
		cin >> a >> b;
		if(win(a, b)){
			winA ++;
			if(a == 'C')
				win_mostA[1] ++;
			if(a == 'J')
				win_mostA[2] ++;
			if(a == 'B')
				win_mostA[0] ++;
		}
		else if(a == b){
			tie ++;
		}
		else{
			loseA ++;
			if(b == 'C')
				win_mostB[1] ++;
			if(b == 'J')
				win_mostB[2] ++;
			if(b == 'B')
				win_mostB[0] ++;
		}
	}
	cout << winA << ' ' << tie << ' ' << loseA << endl;
	cout << loseA << ' ' << tie << ' ' << winA << endl;
	int ind = 0, max = win_mostA[0];
	for(int i = 1; i < 3; i++){
		if(max < win_mostA[i]){
			ind = i;
			max = win_mostA[i];
		}
	}
	cout << ch[ind] << ' ';
	ind = 0, max = win_mostB[0];
	for(int i = 1; i < 3; i++){
		if(max < win_mostB[i]){
			ind = i;
			max = win_mostB[i];
		}
	}
	cout << ch[ind] << endl;
	return 0;
}