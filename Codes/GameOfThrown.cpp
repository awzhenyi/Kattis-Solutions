#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod(int a, int b)
{ return (a%b+b)%b; }

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	cin.ignore();
	vector<int> dq;
	string s; getline(cin,s);
	stringstream iss(s);
	string check;
	while(iss >> check) {
		if(isdigit(check[0])) 
			dq.push_back(stoi(check));
		else if(check[0]=='-') {
			int temp = stoi(check);
			dq.push_back(temp);
		}
		else {
			int a; iss >> a;
			for(int i=0; i<a; ++i)
				dq.pop_back();
		}
	}
	int child = 0;
	for(auto &i: dq) {
		if(i==0||i%N==0)
			continue;
		else if (i>0) {
			child +=i;
			if(child>N-1) {
				child = mod(child, N);
			}
		}
		else if (i<0) {
			child += i;
			if(child<0) {
				child = mod(child, N);
			}
		}
	}
	cout << child;
	
}
