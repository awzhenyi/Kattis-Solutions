#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Area of Circle gives most area/covers any area?
int main() {
	double pi = 3.1415926535897;
	double a,b;
	cin >> a >> b;
	double rad = sqrt(a/pi);
	if(2*pi*rad<=b)
		cout << "Diablo is happy!";
	else
		cout << "Need more materials!";
	return 0;
}