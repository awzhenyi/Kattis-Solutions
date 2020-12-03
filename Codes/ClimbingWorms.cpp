#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int a,b,h;
	cin >> a >> b >> h;
	int count = 0;
	while(h>0) {
		int move = a-b;
		if (h > a) {
			h-move;
			h-=move;
			count ++;
		} else {
			h-=a;
			count ++;
		}
	}
	cout << count;
	return 0;
}