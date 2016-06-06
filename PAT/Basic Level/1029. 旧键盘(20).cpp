#include <iostream>
#include <string>
using namespace  std;
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	int i = 0, j = 0;
	string res = "";
	for(i; i < s1.length(); i++){
		if(s1[i] == s2[j] && j < s2.length())
			j++;
		else{
			if(islower(s1[i])){
				char temp = toupper(s1[i]);
				if(res.find(temp) == string::npos)
					res += temp;
			}
			else
			{
				if(res.find(s1[i]) == string::npos)
					res += s1[i];
			}
		}
	}
	cout << res << endl;
	return 0;
}