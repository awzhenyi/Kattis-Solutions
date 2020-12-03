#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define is pair<int,string>
#define ii pair<int,int>
#define pll pair<ll, ll>
#define mp make_pair
#define FOR(i,n) for(int i=0; i<n; ++i)
#define pb push_back
#define eb emplace_back
#define ar array
#define vt vector
#define EACH(i,x) for(auto &i : x)

//distance x2 => walk back and forth
//output is the "highest" min distance required for all M days
//find min distance every day(?) => vector.sort() => take largest?
struct comparator
{
    bool operator()(const ii &t1, const ii &t2) const
    { return t1.second < t2.second;
    }
};

vt<vt<pll>> adj;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll vertex,edge,c,k,m;
    cin >> vertex >> edge >> c >> k >> m;
    adj.assign(vertex, vt<pll>());
    FOR(i,edge) {//edges
        int u,v,w; cin >> u >> v >> w;
        --u,--v;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }
    vt<ll> dist(vertex, LLONG_MAX); //distance vector, initialise with max ll value
    dist[0]  = 0; 
    set<ll> clearings; //to store clearing vertex
    FOR(i,c) {
        ll k; cin >> k;
        --k;
        clearings.insert(k);
    }
    priority_queue<pll, vt<pll>, greater<pll>> pq;
    pq.push({0,0}); //source vector = 0 ,dist = 0;
    while(pq.size()) {// dijkstras
        pll u = pq.top();
        pq.pop();
        //u.first = vertex, u.second = dist;
        EACH(i, adj[u.first]) {
            if(dist[i.first] <= i.second + dist[u.first])continue;
            dist[i.first] = i.second + dist[u.first];
            pq.push({i.first,dist[i.first]});
        }       
    }
    //multiset works, set doesnt works ????
    multiset<pll, comparator> s1;
    //if the clearings are not reachable, we dont add to the viable set
    for(auto it = clearings.begin(); it!= clearings.end(); ++it) {
        if(dist[*it]==LLONG_MAX)
            continue;
        else 
            s1.insert({*it, dist[*it]});
    }
    ll ans = 0;
    bool impossible = 0;
    map<ll,pll> mm; //maps days to vertex
    //loop the min of k or m. if K < M, guaranteed to have enough?
    //if M > K 
    for(int i = 1; i <= min(k,m); ++i) {
        if(mm.count(i)) {//if at this day, some clearing has regrown, add it back
            s1.insert(mm[i]);
        }
        if(s1.empty()) {//if run out of clearings to go to before M days, cout -1
            impossible = 1;
            break;
        }
        auto it = s1.begin();//clearing sorted by lowest distance.
        ans = max(ans, it->second);// get max distance needed
        mm[i+k] = *it; //map day[i+k] (regrow day to the map)
        s1.erase(it);//pop clearing
    }
    if(impossible) {
        cout << - 1;
    } else {
        cout << 2*ans;//*2 go back and forth
    }
    return 0;
}
