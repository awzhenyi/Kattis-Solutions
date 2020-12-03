#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int max = 0,contestant=0;
	for(int i=0; i<5; ++i) {
		int score = 0;
		for(int j=0; j<4; ++j) {
			int a;
			cin >> a;
			score += a;
		}
		if (score > max) {
			max = score;
			contestant = i+1;
		}
	}
	cout << contestant << " " << max;
	return 0;
}