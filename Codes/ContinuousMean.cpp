#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Try arrays!
ll median(ll a[], int i) {
	if(i%2==0)
		return (a[i/2]+a[i/2-1])/2;
	else
		return a[i/2];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n; cin >> n;
	while(n--) {
		int a; cin >> a;
		ll arr[a];
		ll total = 0;
		for(int i=0; i<a; ++i) {
			cin >> arr[i];
			for(int j=1; j<i; ++j) {
				int X = arr[j];
				int k = j-1;
				for(; k>=0 && arr[k]>X; --k) {
					arr[k+1] = arr[k];
				}
				arr[k+1] = X;
			}
			total += median(arr, i+1);
		}
		cout << total << endl;
	}
	return 0;
}
	


/*ll median(vector<ll>v1) {
	if(v1.size()%2==0)
		return ((v1[v1.size()/2]+v1[v1.size()/2-1])/2);
	else
		return (v1[(v1.size()-1)/2]);
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n; cin >> n;
	while(n--) {
		int a; cin >> a;
		vector<ll> v1;
		ll total = 0;
		for(int i=0; i<a; ++i) {
			int b; cin >> b;
			v1.push_back(b);
			for(int i=1; i<v1.size(); ++i) {
				int X = v1[i];
				int j = i-1;
				for(; j>=0 && v1[j]>X; --j) {
					v1[j+1] = v1[j];
				}
				v1[j+1] = X;
			}
			total += median(v1);
		}
		cout << total << endl;
	}
	return 0;
}*/