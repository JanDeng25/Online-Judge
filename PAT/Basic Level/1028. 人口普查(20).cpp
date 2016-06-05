#include <iostream>
#include <string>
using namespace std;
int main(){
	int N;
	cin >> N;
	char c;
	int count = 0;
	string name,birthday;
	string youngest_name, oldest_name;
	string youngest, youngest_birthday;
	youngest_birthday = "1814/09/06";
	string oldest, oldest_birthday;
	oldest_birthday = "2014/09/06";
	for(int i = 0; i < N; i ++){
		cin >> name >> birthday;
		if(birthday <= "2014/09/06" && birthday >= "1814/09/06"){
			count ++;
			if(youngest_birthday < birthday){
				youngest_name = name;
				youngest_birthday = birthday;
			}
			if(oldest_birthday > birthday){
				oldest_name = name;
				oldest_birthday = birthday;
			}
		}
	}
	if(count)
	    cout << count << ' ' << oldest_name << ' ' << youngest_name << endl;
	else
		cout << count << endl;
	return 0;
}