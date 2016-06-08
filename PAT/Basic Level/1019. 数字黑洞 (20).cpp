#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
using namespace  std;
int reverse(int n){
	int m = 0;
	for(int i = 0; i < 4; i++){
		m = 10 * m + n % 10;
		n /= 10;
	}
	return m;
}
int caculate(int n){
	int a[4], m = 0, l = 0;
	for(int i = 0; i < 4; i ++){
		a[i] = n % 10;
		n /= 10;
	}
	sort(a,a + 4);
	for(int i = 0; i < 4; i ++){
		l = 10 * l + a[i];
	}
	for(int i = 3; i >= 0; i --){
		m = 10 * m + a[i];
	}
	printf("%04d - %04d = %04d\n",m,l,m-l);
	return m - l;
}
int main(){
	int n;    cin >> n;
	if(reverse(n) == n){
		printf("%04d - %04d = %04d\n",n,n,n-n);
		return 0;
	}
	n = caculate(n);
	while(n != 6174){
		n = caculate(n);
	}
	return 0;
}