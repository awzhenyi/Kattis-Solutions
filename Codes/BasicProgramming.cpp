#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n,t;
	cin >> n >> t;
	set<int> s1;
	vector<int>v1;
	map<int,int> m1;
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		s1.insert(a);
		v1.push_back(a);
		if(m1.count(a)!=1)
			m1.insert(make_pair(a,1));
		else
			m1[a] += 1;
	}
	if(t==1) {
		//triple element search
		//double element just without x and remain, same looping idea
		sort(v1.begin(),v1.end());
		for(int i=0; i<v1.size(); ++i) {
			int x = v1[i];
			int remain = 7777 - x;
			int start = i+1;
			int end = v1.size()-1;
			while(start < end) {
				if(v1[start]+v1[end]==remain) {
					cout << "Yes";
					return 0;
				} 
				else if (v1[start]+v1[end]<remain)
					start++;
				else
					end--;
			}
			cout << "No";
			return 0;
		}
	}

	else if(t==2) {
		if(s1.size()==n)
			cout << "Unique";
		else
			cout << "Contains duplicate";
		return 0;
	}

	else if(t==3) {
		for(auto kv : m1) {
			if (kv.second > n/2) {
				cout << kv.first << " ";
				return 0;
			}
		}
		cout << -1;
		return 0;
	}
	else if(t==4) {
		sort(v1.begin(),v1.end());
		if(n%2==0) {
			cout << v1[n/2-1] << " " << v1[n/2];
			return 0;
		} else {
			cout << v1[(n-1)/2];
			return 0;
		}
	}
	else if(t==5) {
		sort(v1.begin(),v1.end());
		for(auto i : v1) {
			if(i >= 100 & i <= 999)
				cout << i << " ";
		}
		return 0;
	}
	return 0;
}