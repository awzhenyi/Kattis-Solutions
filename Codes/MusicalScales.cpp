#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	vector<vector<string>> v1 = {
		{"A","B","C#","D","E","F#","G#","A"},
		{"A#","C","D","D#","F","G","A","A#"},
		{"B","C#","D#","E","F#","G#","A#","B"},
		{"C","D","E","F","G","A","B","C"},
		{"C#","D#","F","F#","G#","A#","C","C#"},
		{"D","E","F#","G","A","B","C#","D"},
		{"D#","F","G","G#","A#","C","D","D#"},
		{"E","F#","G#","A","B","C#","D#","E"},
		{"F","G","A","A#","C","D","E","F"},
		{"F#","G#","A#","B","C#","D#","F","F#"},
		{"G","A","B","C","D","E","F#","G"},
		{"G#","A#","C","C#","D#","F","G","G#"}
	};
	int n;
	cin >> n;
	set<string> s1;
	while(n--) {
		string s;
		cin >> s;
		s1.insert(s);
	}
	string final = "";
	for(auto &j : v1) {
		int count = 0;
		for(auto &i :s1) {
			if(find(j.begin(),j.end(),i)!=j.end())
				count++;
		}
		if(count == s1.size()) {
			final += j[0];
			final += " ";
		}

	}
	cout << (final.length()>0?final:"none") << endl;
			
}