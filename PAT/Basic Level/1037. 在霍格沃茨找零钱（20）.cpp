#include <iostream>
using namespace std;
bool notEnough (int gp, int sp, int kp, int ga, int sa, int ka){
	return (gp > ga) || (gp == ga && sp > sa) || (gp == ga && sp == sa && kp > ka);
}
int main(){
	int gp, sp, kp, ga, sa, ka;
	char c;
	cin >> gp >> c >> sp >> c >> kp >> ga >> c >> sa >> c >> ka;
	if(notEnough(gp,sp,kp,ga,sa,ka)){
		cout << '-';
		swap(gp,ga);
		swap(sp,sa);
		swap(kp,ka);
	}
	if(ka < kp){
		ka += 29;
		sa -= 1;
	}
	ka -= kp;
	if(sa < sp){
		sa += 17;
		ga -= 1;
	}
	sa -= sp;
	
	ga -= gp;
	cout << ga << '.' << sa << '.' << ka << endl;
	return 0;
}