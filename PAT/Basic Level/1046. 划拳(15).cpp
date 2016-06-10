#include <iostream>
using namespace std;
int main(){
	int n;    cin >> n;
	int winA = 0, winB = 0;
	int hanA,huaA,hanB,huaB;
	for(int i = 0; i < n; i++){
		cin >> hanA >> huaA >> hanB >> huaB;
		int han = hanA + hanB;
		if(huaA == han && huaB != han)
			winA++;
		else if(huaA != han && huaB == han)
			winB ++;
	}
	cout << winB << ' ' << winA << endl;
	return 0;
}