#include <iostream>
#include <string>
using namespace  std;
int main(){
	int n;    cin >> n;
	string id;
	int check;
	int count = 0;
	int w[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	char z[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	for(int i = 0; i < n; i++){
		bool valid = true;
		cin >> id;
		check = 0;
		for(int j = 0; j < 17; j++){
			if(!isdigit(id[j])){
				count ++;
				valid = false;
				cout << id << endl;
				break;
			}
			check += w[j] * (id[j] - '0');
		}
		if(valid && z[check % 11] != id[17]){
			count ++;
			cout << id << endl;
		}
	}
	if(count == 0)
		cout << "All passed" << endl;
	return 0;
}