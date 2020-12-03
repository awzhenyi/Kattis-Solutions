#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int a;
	cin >> a;
	vector<int> vb;
	vector<int> vr;
	for(int i=0; i<a; ++i) {
		string s;
		cin >> s;
		if(s[s.length()-1]=='B') {
			s.pop_back();
			vb.push_back(stoi(s));
		} else {
 			s.pop_back();
			vr.push_back(stoi(s));
		}
	}
	sort(vr.begin(),vr.end(),greater<int>());
	sort(vb.begin(),vb.end(),greater<int>());
	int length = 0;
	if(vr.size()<=vb.size()) {
		for(int i=0; i<vr.size(); ++i) {
			length += vr[i];
			length += vb[i];
			length-=2;
		}
	} else {
		for(int i=0; i<vb.size(); ++i) {
			length += vr[i];
			length += vb[i];
			length-=2;
		}
	}
	if(a==1)
		cout << 0 << endl;
	else
		cout << length << endl;
}


int main() {
	int n;
	cin >> n;
	int i = 1;
	while(n--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

