#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<int> v1;
	while(n--) {
		int a;
		cin >> a;
		v1.push_back(a);
	}
	sort(v1.begin(),v1.end(),greater<int>());
	int total=0, subtract=0;
	for(int i=2;i<v1.size();i+=3)
		subtract += v1[i];
	for(int i : v1)
		total += i;
	int diff = total - subtract;
	cout << diff << endl;
	return 0;
}