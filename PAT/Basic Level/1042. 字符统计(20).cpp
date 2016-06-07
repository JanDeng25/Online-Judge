#include <iostream>
#include <string>
#include <map>
using namespace  std;
int main(){
	map<char,int> m;
	string s;
	/*getline(cin,s);
	for(int i = 0; i < s.length(); i++){
		if(isalpha(s[i])){
			m[tolower(s[i])] ++;
		}
		
	}*/
	char c = getchar();
	while(c != '\n'){
		//cout << c ;
		if(isalpha(c)){
			m[tolower(c)] ++;
		}
		c = getchar();
	}
	map<char,int>::iterator itr = m.begin();
	int max = 0;
	char ch;
	for(itr; itr != m.end(); itr++){
		//cout << itr->first << ':' << itr->second << endl;
		if(itr->second > max){
			max = itr->second;
			ch = itr->first;
		}
	}
	cout << ch << ' ' << max << endl; 
	return 0;
}