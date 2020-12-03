#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//reverse array and print each element
int main() {
    int a;
    cin >> a;
    int arr[a];
    for(int i=0,b; i<a; ++i) {
        cin >> b;
        arr[i] = b;
    }
    for(int i = a-1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    return 0;
}

//vector of arrays dynamic insert
int main() {
    int n,q,k,i,j;
    cin >> n >> q;
    vector<vector<int>> v1;
    for(int a=0; a<n; ++a) {
        cin >> k;
        vector<int> v2;
        for(int b=0; b<k; ++b) {
            cin >> i;
            v2.push_back(i);
        }
        v1.push_back(v2);
    }
    for(int a=0; a<q; ++a) {
        cin >> i >> j;
        cout << v1[i][j] << endl;
    }
    return 0;
}

//map and search
int main() {
    int a;
    map<string, int> m1;
    cin >> a;
    for(int i=0;i<a;++i) {  
        string s; int b; int c;
        cin >> b;
        if (b==1) {
            cin >> s >> c;
            if (m1.count(s)==1) {
                m1[s] += c;
            } else {
            m1.insert(make_pair(s,c));
            }
        } else if (b==2) {
            cin >> s;
            m1[s] = 0;
        } else {
            cin >> s;
            cout << m1[s] << endl;
        }
    }
    return 0;
}