#include <iostream>
#include <string>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	bool odd = true;
	while(b.length() < a.length()){
		b = "0" + b;
	}
	for(int i = a.length() - 1, j = b.length() - 1; i >= 0 && j >= 0; i--, j--){
		if(odd){
			//cout << "odd" << endl;
			odd = false;
			int temp = a[i] - '0' + b[j] - '0';
			temp = temp % 13;
			//cout << temp << endl;
			if(temp < 10){
				b[j] = '0' + temp;
				continue;
			}
			if(temp == 10){
				b[j] = 'J';
				continue;
			}
			if(temp == 11){
				b[j] = 'Q';
				continue;
			}
			if(temp == 12){
				b[j] = 'K';
				continue;
			}
			
		}
		else{
			//cout << "even" << endl;
			odd = true;
			int temp = (b[j] - '0') - (a[i] - '0');
			//cout << temp << endl;
			if(temp < 0){
				temp += 10;
				//cout << temp << endl;
			}
			b[j] = temp + '0';
		}
	}
	cout << b << endl;
	return 0;
}