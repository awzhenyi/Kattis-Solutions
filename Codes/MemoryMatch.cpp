#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	map<int, string> m1;
	int cards,n;
	cin >> cards >> n;
	int final = cards;
	while(n--) {
		int a,b;
		string c,d;
		cin >> a >> b >> c >> d;
		if(c==d) {
			m1.erase(a);
			m1.erase(b);
			final-=2;
		} else {
			if (m1.count(a)!=1)
				m1.insert(make_pair(a,c));
			if (m1.count(b)!=1)
				m1.insert(make_pair(b,d));
		}
	}
	map<string,int>m2;
	for(auto &kv : m1) {
		if(m2.count(kv.second)!=1)
			m2.insert(make_pair(kv.second,1));
		else
			m2[kv.second] += 1;
	}
	int count = 0;
	int remaining = 0;
	for(auto &i : m2) {
		if(i.second == 2) {
			count++;
			final-=2;
		}
		else
			remaining++;
	}
	if(remaining*2==final) {
		count+=remaining;
		final = final - (remaining*2);
	}
	if(final==2)
		count++;
	cout << count << endl;
	return 0;
}