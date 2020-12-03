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


/*int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	while(cin >> n >> m && n!=0 && m!=0) {
		vector<int> jack;
		vector<int> jill;
		FOR(i,n) {
			int a; cin >> a;
			jack.eb(a);
		}
		FOR(i,m) {
			int b; cin >> b;
			jill.eb(b);
		}
		vector<int> intersect;
		set_intersection(jack.begin(), jack.end(), jill.begin(), jill.end(), back_inserter(intersect);
		cout << intersect.size() << endl;


}*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	while(cin >> n >> m && n!=0 && m!=0) {
		set<int> jack;
		set<int> jill;
		FOR(i,n) {
			int a; cin >> a;
			jack.insert(a);
		}
		FOR(i,m) {
			int b; cin >> b;
			jill.insert(b);
		}
		set<int> intersect;
		set_intersection(jack.begin(),jack.end(),jill.begin(),jill.end(),inserter(intersect,intersect.begin()));
		cout << intersect.size() << endl;
	}
	return 0;
}