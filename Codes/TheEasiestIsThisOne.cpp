#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll

int sum_digits(int n) {
	int sum=0, m;
	while(n>0){
		m = n%10;
		sum+=m;
		n = n/10;
	}
	return sum
}


int main() {
	int n;
	cin >> n;
	while(n!=0) {
		//bigger than 10;
		int a = 11;
		while(sum_digits(a*n)!=sum_digits(n)) {
			a++;
		}
		cout << a << endl;
	}
	return 0;
}
