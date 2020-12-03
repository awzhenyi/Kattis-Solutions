#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define is pair<int,string>
#define ii pair<int,int>
#define mp make_pair
#define FOR(i,n) for(int i=0; i<n; ++i)
#define pb push_back
#define eb emplace_back
#define ar array

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n; cin >> n;
	vector<ll> v1;
	for(int i=1; i<=sqrt(n); ++i) {
		if(n%i==0) {
			if(n/i == i) {
				v1.pb(i);
			} else {
				ll temp = n/i;
				v1.pb(i);
				v1.pb(temp);
			}
		} 
	}
	sort(v1.begin(),v1.end());
	for(auto &c : v1) {
		cout << c-1 << " ";
	}
}