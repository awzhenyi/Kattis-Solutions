#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int h,w,n;
	cin >> h >> w >> n;
	int start = 0;
	while(n--) {
		int a;
		cin >> a;
		if(start + a > w) {
			cout << "NO";
			return 0;
		} else {
			start+=a;
		}
		if(start==w) {
			h--;
			start = 0;
		}
		if(h==0)
			break;
	}
	if(h==0) 
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}																					