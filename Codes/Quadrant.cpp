#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int x,y;
	cin >> x >> y;
	if(x>0 && y>0)
		cout << 1;
	else if(x>0&&y<0)
		cout << 4;
	else if(x<0&&y>0)
		cout << 2;
	else
		cout << 3;
	return 0;
}