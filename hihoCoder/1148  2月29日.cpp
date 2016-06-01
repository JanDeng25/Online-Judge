#include <iostream>
#include <string>
//#include <map>
#include <unordered_map>
//#include <vector>
//#include <iomanip>
//#include <algorithm>
using namespace std;
int isRun(long y) {
	return (y % 400 == 0) || (y % 100 != 0 && y % 4 == 0);
}
int cal(string m1, string m2, int d1, int d2, long y1, long y2) {
	int res = 0;
	//������ͬһ��ʱ
	if (y1 == y2) {
		if (!isRun(y1))
			return res;
		//date2��2.29֮ǰ����date1��2.29֮��
		if (m2 == "January" || (m2 == "February" && d2 < 29) || m1 == "March" || m1 == "April" || m1 == "May" || m1 == "June" || m1 == "July" || m1 == "August" || m1 == "September" || m1 == "October" || m1 == "December" || m1 == "November")
			return res;
		else
			return 1;
	}
	//�жϵ�ǰ�������Ƿ���2.29֮ǰ note: ������һ��������ͬ��2.29֮ǰ�أ�
	if (isRun(y1) && (m1 == "January" || m1 == "February")) {
		res++;
		//cout << res << endl;
	}
	res += ((y2 - 1) / 4 - (y2-1) / 100 - y1 / 4 + y1 / 100 + (y2 - 1) / 400 - y1 / 400);
	//cout << res << endl;
	//�ж����һ�������Ƿ���2.29֮��
	if (isRun(y2) && (m2 == "March" || m2 == "April" || m2 == "May" || m2 == "June" || m2 == "July" || m2 == "August" || m2 == "September" || m2 == "October" || m2 == "December" || m2 == "November" || m2 == "February" && d2 == 29))
	{
		res++;
		//cout << res << endl;
	}
	return res;
}
int main() {
	string s;
	int T;    cin >> T;
	int  d1, d2;
	long y1, y2;
	char c;
	string m1, m2;
	for (int i = 1; i <= T; i++) {
		cin >> m1 >> d1 >> c >> y1;
		cin >> m2 >> d2 >> c >> y2;
		cout << "Case #" << i << ": " << cal(m1, m2, d1, d2, y1, y2) << endl;
	}
	return 0;
}