#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//use stringstream

int main() {
	string s;
	while(getline(cin,s)) {
		istringstream iss(s);
		vector<double> v1;
		string name;
		string final = "";
		while(iss >> name) {
			if(isdigit(name[0])) {
				v1.push_back(stod(name));
			}
			else {
				final += name;
				final += " ";
			}
		}
		double average = 0.0;
		for (auto i : v1)
			average += i;
		average/=v1.size();
		cout << fixed << setprecision(6) << average << " " << final << endl;
	}
	return 0;
}

