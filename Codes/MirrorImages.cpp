#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve() {
	int a,b;
	deque<string> dq1;
	cin >> a >> b;
	while(a--) {
		string s;
		cin >> s;
		reverse(s.begin(), s.end());
		dq1.push_front(s);
	}
	for(auto s : dq1)
		cout << s << endl;
}

int main() {
	int i = 1;
	int n;
	cin >> n;
	while(n--) {
		cout << "Test" << " " << i << endl;
		solve();
		++i;
	}
	return 0;
}


/*int main() {
  int T; cin >> T;
  for (int testNo = 1; testNo <= T; ++testNo) {
    int R, C; cin >> R >> C; cin.get();
    string grid[R];
    for (int r = 0; r < R; ++r)
      // getline(cin, grid[r]);
      cin >> grid[r];
    cout << "Test " << testNo << "\n";
    for (int r = 0; r < R; ++r) {
      for (int c = 0; c < C; ++c)
        cout << grid[R-r-1][C-c-1];
      cout << "\n";
    }
  }
  return 0;
}*/