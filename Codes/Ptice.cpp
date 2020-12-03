#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	string arthur = "ABC";
	string bruno = "BABC";
	string goran = "CCAABB";
	int a=0;
	int b=0;
	int g=0;

	string s;
	cin >> s;
	for(int i=0; i<n; ++i) {
		if(s[i] == arthur[i%3])
			a++;
		if(s[i] == bruno[i%4])
			b++;
		if(s[i] == goran[i%6])
			g++;
	}
	int maximum = max(max(a, b), g);
	cout << maximum << endl;
	if(a == maximum) {
        cout << "Adrian" << endl;
    }
    if(b == maximum) {
        cout << "Bruno" << endl;
    }
    if(g == maximum) {
        cout << "Goran" << endl;
    }
	return 0;
}