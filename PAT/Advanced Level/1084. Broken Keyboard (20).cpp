#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
	unordered_map<char, int> res;
	vector<char> v;
	string original, typed_out;
	cin >> original >> typed_out;
	int len1 = original.length();
	int len2 = typed_out.length();
	int j = 0, i = 0;
	for (; i < len1 && j < len2; i++) {
		if (original[i] == typed_out[j]) {
			j++;
		}
		else
		{
			if(res.find(toupper(original[i])) == res.end())
				v.push_back(toupper(original[i]));
			res[toupper(original[i])] ++;
		}
	}
	while (i < len1) {
		if (res.find(toupper(original[i])) == res.end())
			v.push_back(toupper(original[i]));
		res[toupper(original[i])] ++;
		i++;
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
	cout << endl;
	return 0;
}