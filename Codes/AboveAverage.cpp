#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int student;
		cin >> student;
		vector<int> v1;
		//insert grades
		while(student--) {
			int grade;
			cin >> grade;
			v1.push_back(grade);
		}
		double average = 0;
		double count = 0;
		for (int a : v1)
			average += a;
		average/=v1.size();
		for (int a : v1) {
			if (a>average)
				count++;
		}
		double pct = count/v1.size()*100;
		cout << fixed << setprecision(3) << pct << '%' << "\n";
	}
	return 0;
}

	