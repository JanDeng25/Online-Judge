//ÿ��Ѱ�ҵ�һ��ǰ�߱Ⱥ���С���ַ���ÿ��ɾ���Ǹ��ַ�������һ��ʼ��forѭ����ʱ��
//ֻ��ͨ��80%����������
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string del(string s, int n) {
	while (n > 0) {
		int i = 0;
		while (i < s.length() - 1 && s[i] >= s[i + 1])
			i++;
		s.erase(i, 1);
		n--;
	}
	return s;
}
int main() {
	string s;
	int n;
	while (cin >> s && cin >> n) {
		cout << del(s, n) << endl;
	}
	return 0;
}