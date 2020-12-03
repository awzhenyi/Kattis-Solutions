#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*int main() {
	long double a,b;
	cin >> a >> b;
	long double c = a/b;
	cout << c;
	string s = to_string(c);
	for(int i=s.length()-1; i>=0; --i) {
		if(s[i]=='0')
			s.pop_back();
		else
			break;
	}
	if(s.back()=='.')
		s.pop_back();
	cout << s;
	return 0;
}*/

int main() {
	string m,n;
	cin >> m >> n;
	//for small m, big n
	if (n.length()>m.length() && n.length()-m.length()>1) {
		int temp = n.length()-m.length()-1;
		string temp1 = "";
		for(int i=0; i<temp; ++i) {
			temp1 += '0';
		}
		string final = "0." + temp1 + m;
		cout << final;
	} else {
		//for big m, small n
		//idx = index to insert decimal place;
		int idx = m.length()-(n.length()-1);
		m.insert(m.begin()+idx, '.');
		//remove trailing zeroes
		for(int i=m.length()-1; i>=0; --i) {
			if(m[i]=='0')
				m.pop_back();
			else
				break;
		}
		//if last digit is now decimal, remove;
		if(m.back()=='.')
			m.pop_back();
		//if decimal is first digit;
		if(m.front()=='.')
			m = '0' + m;
		cout << m;
	}
}