#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	map<char,string> m1;
	m1.insert(make_pair('a',"@"));
	m1.insert(make_pair('b',"8"));
	m1.insert(make_pair('c',"("));
	m1.insert(make_pair('d',"|)"));
	m1.insert(make_pair('e',"3"));
	m1.insert(make_pair('f',"#"));
	m1.insert(make_pair('g',"6"));
	m1.insert(make_pair('h',"[-]"));
	m1.insert(make_pair('i',"|"));
	m1.insert(make_pair('j',"_|"));
	m1.insert(make_pair('k',"|<"));
	m1.insert(make_pair('l',"1"));
	m1.insert(make_pair('m',"[]\\/[]"));
	m1.insert(make_pair('n',"[]\\[]"));
	m1.insert(make_pair('o',"0"));
	m1.insert(make_pair('p',"|D"));
	m1.insert(make_pair('q',"(,)"));
	m1.insert(make_pair('r',"|Z"));
	m1.insert(make_pair('s',"$"));
	m1.insert(make_pair('t',"']['"));
	m1.insert(make_pair('u',"|_|"));
	m1.insert(make_pair('v',"\\/"));
	m1.insert(make_pair('w',"\\/\\/"));
	m1.insert(make_pair('x',"}{"));
	m1.insert(make_pair('y',"`/"));
	m1.insert(make_pair('z',"2"));
	string s;
	getline(cin,s);
	string final = "";
	for (char c : s) {
		c = tolower(c);
		if (m1.count(c)==1)
			final += m1[c];
		else
			final += c;
	}
	cout << final << endl;
	return 0;

}