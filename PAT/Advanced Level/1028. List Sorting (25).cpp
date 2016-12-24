#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct stu {
	int id;
	string name;
	int grade;
};
bool cmp1(stu stu1, stu stu2) {
	return stu1.id < stu2.id;
}
bool cmp2(stu stu1, stu stu2) {
	return stu1.name < stu2.name || (stu1.name == stu2.name && stu1.id < stu2.id);
}
bool cmp3(stu stu1, stu stu2) {
	return stu1.grade < stu2.grade || (stu1.grade == stu2.grade && stu1.id < stu2.id);
}
int main() {
	int n, c;
	cin >> n >> c;
	vector<stu> students;
	char name[12];
	stu temp;
	for (int i = 0; i < n; i++) {
		//cin >> temp.id >> temp.name >> temp.grade;
		scanf("%d%s%d", &temp.id, name, &temp.grade);
		temp.name = string(name);
		students.push_back(temp);
	}
	if (c == 1) {
		sort(students.begin(), students.end(), cmp1);
	}
	else if (c == 2) {
		sort(students.begin(), students.end(), cmp2);
	}
	else if (c == 3) {
		sort(students.begin(), students.end(), cmp3);
	}
	for (int i = 0; i < n; i++) {
		printf("%06d %s %d\n", students[i].id, students[i].name.c_str(), students[i].grade);
	}
	return 0;
}