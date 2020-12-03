#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Need a way to track W without recalculating through every element in the set -- S + K.W => priority. But we are only given T.
//S => Higher num, higher priority
//T => Lower num, higher priority
//constant K not impt
//S - (K*T)                                     S + (K*W), T = 50
//S=100, K = 1, T = 5, priority = 95            S = 100, K=1 , T=5 , prioirty = 145
//S=100, K = 1, T = 10, priority = 90		    S = 100, K=1, T=10, priority = 140
//S=200, K = 1, T = 50, priority = 150			S = 200, K=1, T=50 , priority = 200
//S=100, K = 100, T = 5, priority = -400	  	S = 100, K=100, T=5, W = 105 priority = 10100
//S=500, K = 100, T = 100, priority = -9500		priority = 600

struct comparator
{
    bool operator()(const pair<string,ll> &p1, const pair<string,ll> p2) const
    { if(p1.second == p2.second)
        return p1.first < p2.first; //same priority, sort by smallest string;
      else 
        return p1.second > p2.second;//else return larger priority
    }
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N; cin >> N;
	int K; cin >> K;
	set<pair<string,ll>, comparator> s1;
	unordered_map<string,ll> m1;
	while(N--) {
		int cmd; cin>>cmd;
		if(cmd==1) {
			int severity, time;
			string name;
			cin >> time >> name >> severity;
			ll priority = severity - (K*(ll)time);
			s1.insert({make_pair(name, priority)});
			m1.insert(make_pair(name, priority));
		}
		else if(cmd==2) {
			int T; cin >> T; // T does not matter since it is arbitary. First patient in the set is gauranteed to have highest priority
			if(s1.empty()) {
				cout << "doctor takes a break" << endl;
			} else {
				auto it = s1.begin();
				string patient = get<0>(*it);
				cout << patient << endl;
				s1.erase(make_pair(patient, m1[patient]));
				m1.erase(patient);
			}
		}
		else if(cmd==3) {
			int T; cin >> T;
			string name; cin >> name;
			ll priority = m1[name];
			s1.erase(make_pair(name,priority));
			m1.erase(name);
		}
	}
	return 0;
}
	
