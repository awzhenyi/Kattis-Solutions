#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	map<char, int> m1;
	int a;
	char b;
	string c;
	int total=0, correct=0;
	while(cin >> a >> b >> c && a!=-1) {
		if (c == "right") {
			total += a;
			total += m1[b];
			correct++;
		} else {
			if (m1.count(b)==1) {
				m1[b] += 20;
			} else {
				m1.insert(make_pair(b,20));
			}
		}
	}
	cout << correct << " " << total << endl;
	return 0;
}