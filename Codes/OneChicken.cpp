#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int a,b;
	cin >> a >> b;
	if(b>a) {
		int diff = b-a;
		if(diff==1)
			cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
		else
		    cout << "Dr. Chaz will have " << diff << " pieces of chicken left over!" << endl;
	} else {
		int diff = a-b;
		if(diff==1)
        	cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
        else
        	cout << "Dr. Chaz needs " << diff << " more pieces of chicken!" << endl;
    }
    return 0;
}