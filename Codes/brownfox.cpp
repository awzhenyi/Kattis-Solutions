#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void pangram(string s) {
	int arr[26] = {0};
	for(int i=0; i<s.length(); ++i) {
		char c = tolower(s[i]);
		if('a'<=c && c<='z') {
			int index = c - 'a';
			arr[index] = 1;
			//if its not an alphabet
		} else {
			continue;
		}
	}
	int count = 0;
	for(int i : arr) {
		count+=i;
	}	
	if(count == 26) {
		cout << "pangram" << endl;
	} else {
		string final = "";
		for(int i=0; i<size(arr); ++i)
			if(arr[i]==0)
				//convert to ascii
				final+=char(i+97);
		cout << "missing " << final << endl;
	}
}

int main() {
	int cases;
	cin >> cases;
	cin.ignore();
	while(cases--){
		string s;
		getline(cin,s);
		pangram(s);
	}
	return 0;
}