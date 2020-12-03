#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	//turtle starts out bottom left, facing right
	//insert board
	char arr[8][8];
	for(int i=0; i<8; ++i) {
		for(int j=0; j<8; ++j) {
			cin >> arr[i][j];
		}
	}
	//turtle starting squares
	int x = 7; // i
	int y = 0; // j
	string face = "right";
	string s;
	cin >> s;
	//bruteforce every instruction
	//loop instructions
	for(char c : s) {
		if(c == 'F') {
			if(face == "right")
				y++;
			if(face == "left") 
				y--;
			if(face == "front")
				x--;
			if(face == "back")
				x++;
			//if movement exceeds border, bug and return straight
			if(x<0||x>7||y<0||y>7) {
				cout << x << y;
				cout << "Bug!" << endl;
				return 0;
			}
			//if movement into castle, bug and return;
			if(arr[x][y]=='C' || arr[x][y]=='I') {
				cout << "Bug!" << endl;
				return 0;
			}
		} else if(c == 'L') {
			if(face=="right")
				face = "front";
			else if(face=="left")
				face ="back";
			else if(face=="front")
				face = "left";
			else if(face=="back")
				face = "right";
		} else if(c == 'R') {
			if(face=="right")
				face="back";
			else if(face=="back")
				face = "left";
			else if(face=="left")
				face="front";
			else if(face=="front")
				face="right";
		} else if(c == 'X') {
			if(face=="front") {
				if(x-1>=0 && arr[x-1][y]=='I')
					arr[x-1][y]='.';
				else {
					cout << "Bug!" << endl;
					return 0;
				}
			} else if(face=="right") {
				if(y+1<=7 && arr[x][y+1]=='I')
					arr[x][y+1]='.';
				else {
					cout << "Bug!" << endl;
					return 0;
				}
			} else if(face=="left") {
				if(y-1>=0 && arr[x][y-1]=='I')
					arr[x][y-1]='.';
				else {
					cout << "Bug!" << endl;
					return 0;
				}
			} else if(face=="back") {
				if(x+1<=7 && arr[x+1][y]=='I')
					arr[x+1][y]='.';
				else {
					cout << "Bug!" << endl;
					return 0;
				}

			}

		}

	}
	if(arr[x][y]=='D')
		cout << "Diamond!" << endl;
	else
		cout << "Bug!" << endl;
	return 0;

}