#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n,p;
    cin >> n >> p;
    vector<int> v1;
    int a[n] = {0};
    if(n==1)
        cout << 1;
    else {
        while(n--){
            int a;
            cin>>a;
            v1.push_back(a);
        }
        sort(v1.begin(), v1.end());
        for(int i=0; i<v1.size()-1; ++i) {
            if (v1[i]+v1[i+1]<=p) {
                a[i] = 1;
                a[i+1] = 1;
            } else {
            	break;
            }
        }
        int sum = 0;
        for(int i : a)
            sum += i;
        //if only first item is less than p
        if(sum==0 && v1[0]<p)
        	sum ++;
        cout << sum << "\n";
    }
    return 0;
}