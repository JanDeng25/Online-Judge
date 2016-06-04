#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
  int N;    cin >> N;
  vector<double> v;
  double temp, sum = 0;
  for(int i = 0; i < N; i ++){
    cin >> temp;
    v.push_back(temp);
  }
  for(int i = 1; i <= N; i ++){
    sum += (v[i-1] * i * (N - i + 1));
  }
  cout << fixed << setprecision(2) << sum << endl;
  return 0;
}