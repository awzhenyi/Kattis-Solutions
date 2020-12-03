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

struct comparator
{
    bool operator()(const is &p1, const is &p2) const
    { if(p1.first == p2.first)
        return p1.second < p2.second; 
      else 
        return p1.first > p2.first;
    }
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	set<is, comparator> s1;
	set<is, comparator> s2;
	set<is, comparator> s3;
	unordered_map<string, tuple<int,int,int>> m1;
	while(N--) {
		string s;
		int a,b,c;
		cin >> s >> a >> b >> c;
		s1.insert({a,s});
		s2.insert({b,s});
		s3.insert({c,s});
		m1.insert({s,make_tuple(a,b,c)});
	}
	while(s1.size()>=3) {
		vector<string> v1;
		auto it1 = s1.begin();
		//cout << it1->second << " ";
		v1.pb(it1->second);
		tuple<int,int,int> p1 = m1[it1->second];
		s2.erase({get<1>(p1),it1->second});
		s3.erase({get<2>(p1),it1->second});
		s1.erase(it1);
		auto it2 = s2.begin();
		//cout << it2->second << " ";
		v1.pb(it2->second);
		tuple<int,int,int> p2 = m1[it2->second];
		s1.erase({get<0>(p2),it2->second});
		s3.erase({get<2>(p2),it2->second});
		s2.erase(it2);
		auto it3 = s3.begin();
		//cout << it3->second << endl;
		v1.pb(it3->second);
		tuple<int,int,int> p3 = m1[it3->second];
		s1.erase({get<0>(p3),it3->second});
		s2.erase({get<1>(p3),it3->second});
		s3.erase(it3);
		sort(v1.begin(),v1.end());
		for(auto &i : v1)
			cout << i << " ";
		cout << endl;
	}
	return 0;

}