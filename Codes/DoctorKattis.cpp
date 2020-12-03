#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
Need a second data structure (??) to keep track of position in priority queue to make access/search O(1)/O(log N). O(N) search too slow
Take note of break tie by time of arrival(not given, can keep track in 2nd container or tracked using a variable pushed to the pq),
otherwise easy comparison using infection level.
Update infection => some kind of fast access O(1) ==> bubble up/down in O(log N) 200k cats => height of tree ~18
extractMax() log N => fast enuff
insert() log N => fast enuff
stl pq no random access, only extract max
*/
/*Use set as a priority queue => backed by 2nd container unordered_map for fast access
Set is backed by a binary tree
Set has remove min/max using set iterator to begin() & rbegin() in O(1)
Set insert time complexity O(log N) similar to insert in binary heap 
Set erase time complexity O(log N)/O(1)? => searched by access from 2nd container
Unordered map insert/access average O(1)-worst case O(N)
map insert/access average O(log N)*/

struct comparator
{
	bool operator()(const tuple<int,string,int> &t1, const tuple<int,string,int> &t2) const
    { if(get<0>(t1)== get<0>(t2))
        return get<2>(t1) < get<2>(t2); // if both have same infection, sort by smaller time of arrival 
      else 
        return get<0>(t1) > get<0>(t2); // else sort by higher infection level
    }
};

int main() {
  set<tuple<int,string,int>,comparator> s1;
  unordered_map<string,pair<int,int>> m1;
  int time = 0;
  int N; cin>> N;
  while(N--) {
  	int cmd;
    cin >> cmd;
    if(cmd==0) {
      int infection; string name;
      cin >> name >> infection;
      s1.insert(make_tuple(infection,name,time));
      m1.insert({name,make_pair(infection,time)});
      time++;
    }
    else if(cmd==1) {
      int infection; string name; 	
      cin >> name >> infection;
      pair<int,int> p1 = m1[name];
      s1.erase(make_tuple(p1.first,name,p1.second));
      s1.insert(make_tuple(p1.first+infection,name,p1.second));
      m1[name] = make_pair(p1.first+infection,p1.second);
    }
    else if(cmd==2) {
      string name;
      cin >> name;
      pair<int,int> p1 = m1[name];
      s1.erase(make_tuple(p1.first,name,p1.second));
      m1.erase(name);
    }
    else if(cmd==3) {
      if(s1.empty())
        cout << "The clinic is empty" << endl;
      else {
        auto it = s1.begin();
        string catName = get<1>(*it);
        cout << catName << endl;
      }
    }
  }
  return 0;
}