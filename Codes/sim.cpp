#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int TC; cin >> TC;
	cin.ignore();
	while(TC--) {
		string a;
		getline(cin, a);
		list<char> l1;
		list<char>::iterator it;
		bool head = 0;
		it = l1.begin();
		int counter = 0;
		for(auto &c: a) {
			if(head==0) {
				if(c == ']') {
					continue;
				}
				else if(c == '[') {
					it = l1.begin();
					counter = 0;
					head = 1;
				}
				else if(c == '<') {
					if(!l1.empty())
						l1.pop_back();	
				}
				else {
					l1.push_back(c);
				}
			} else if(head==1) {
				it = l1.begin();
				advance(it,counter);
				if(c == '[') {
					it = l1.begin();
					counter = 0;
				}
				else if(c==']') {
					it = l1.begin();
					head = 0;
				}
				else if(c == '<') {
					if(counter > 0)
						counter--;
					if(it!=l1.begin()) {
						l1.erase(--it);
					} 
				}
				else {
					counter++;
					l1.insert(it,c);
				}

			}
		}
		for(auto &c : l1)
			cout << c;
		cout << endl;
	}
	return 0;
}