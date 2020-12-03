#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//custom comparator
bool comparewhite(string a, string b) {
	map<char,int> m1 = {
		{'K',5},
		{'Q',4},
		{'R',3},
		{'B',2},
		{'N',1}
	};
	//sort big pieces vs pawns;
	if(a.length() > b.length())
		return true;
	if(a.length() < b.length())
		return false;
	//sort pawns
	if(a.length()==b.length() && a.length()==2) {
		if(a[1] == b[1])
			return a[0] < b[0];
		else
			return a[1] < b[1];
	}
	//sort big pieces;
	if(a.length()==3 && a.length()==b.length()) {
		if(m1[a[0]] == m1[b[0]]) {
			if(a[2]==b[2])
				return a[1] < b[1];
			else
				return a[2] < b[2];
		} else {
			return m1[a[0]] > m1[b[0]];
		}
	}
}

bool compareblack(string a, string b) {
	map<char,int> m1 = {
		{'K',5},
		{'Q',4},
		{'R',3},
		{'B',2},
		{'N',1}
	};
	//sort big pieces vs pawns;
	if(a.length() > b.length())
		return true;
	if(a.length() < b.length())
		return false;
	//sort pawns
	if(a.length()==b.length() && a.length()==2) {
		if(a[1] == b[1])
			return a[0] < b[0];
		else
			return a[1] > b[1];
	}
	//sort big pieces;
	if(a.length()==3 && a.length()==b.length()) {
		if(m1[a[0]] == m1[b[0]]) {
			if(a[2]==b[2])
				return a[1] < b[1];
			else
				return a[2] > b[2];
		} else {
			return m1[a[0]] > m1[b[0]];
		}
	}
}

int main() {
	//each board is 17 characters long(rows), 33 characters wide(col)
	//row is every even char
	//col is every (2-4,5-7, +3,+3)
	//each box has 3 possible spaces
	//Capital letters => white, Small letters => black
	//First form the board
	vector<vector<char>> v1(17, vector<char>(33,0));
    for(auto& i : v1) {
        for(auto& j : i) {
            cin >> j;
        }
    }
    map<int, char> m1 = {
    	{2,'a'},
    	{6,'b'},
    	{10,'c'},
    	{14,'d'},
    	{18,'e'},
    	{22,'f'},
    	{26,'g'},
    	{30,'h'},
    };
    vector<char> vwhite = {'K','Q','R','B','N','P'};
    vector<char> vblack = {'k','q','r','b','n','p'};
    vector<string> white;
    vector<string> black;

    for(int i=0; i<v1.size(); ++i) {
    	for(int j=0; j<v1[i].size(); ++j) {
    		if(find(vwhite.begin(),vwhite.end(), v1[i][j]) != vwhite.end()) {
    			string s = ""; 
    			int temp = 9-(i+1)/2;
    			if(v1[i][j]!='P')
    				s += (toupper(v1[i][j]));
    			s += (m1[j]);
    			s +=(to_string(temp));
    			white.push_back(s);
    		} else if(find(vblack.begin(),vblack.end(), v1[i][j])!=vblack.end()) {
    			string s = "";
    			int temp = 9-(i+1)/2;
    			if(v1[i][j]!='p')
    				s+=(toupper(v1[i][j]));
    			s+=(m1[j]);
    			s+=(to_string(temp));
    			black.push_back(s);
    		}
 
    	}
    }
    sort(white.begin(),white.end(),comparewhite);
    sort(black.begin(),black.end(),compareblack);

    string whitefinal = "White: ";
    string blackfinal = "Black: ";
    for(int i=0; i<white.size();++i) {
    	if(i!=white.size()-1) {
    		whitefinal+=white[i];
    		whitefinal+= ',';
    	} else {
    		whitefinal+=white[i];
    	}
    }
    for(int i=0; i<black.size(); ++i) {
    	if(i!=black.size()-1) {
    		blackfinal+=black[i];
    		blackfinal+= ',';
    	} else {
    		blackfinal+=black[i];
    	}
    }
    cout << whitefinal << endl;
    cout << blackfinal << endl;
    return 0;
 	
	
}