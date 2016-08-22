#include <iostream>
#include <string>
using namespace std;
struct student{
	string name, id;
	int grade;

};
int main() {
	int n;
	string max_grade, min_grade;
	student male, female, temp;
	char gender;
	male.grade = 101;
	female.grade = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp.name >> gender >> temp.id >> temp.grade;
		if (gender == 'M' && temp.grade < male.grade)
		{
			male = temp;
		}
		if (gender == 'F' && temp.grade > female.grade)
		{
			female = temp;
		}
	}
	if (female.grade == -1)
		cout << "Absent" << endl;
	else
		cout << female.name << ' ' << female.id << endl;
	if (male.grade == 101)
		cout << "Absent" << endl;
	else  
		cout << male.name << ' ' << male.id << endl;
	
	if (female.grade == -1 || male.grade == 101)
		cout << "NA" << endl;
	else
		cout << female.grade - male.grade << endl;

	return 0;
}
