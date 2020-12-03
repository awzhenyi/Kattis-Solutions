void dfs(int start){
	if(!possible) return;
	for(auto u:adj[start]){
		if(!possible) return;
		if(color[u]==0){
			color[u]=1;
			dfs(u);
		}
		else if(color[u]==1){
			possible=false;
		}
	}
	ans.pb(start);
	color[start]=2; //Fully explored
	return;
}


int main() {
ios::sync_with_stdio(0);
cin.tie(0);

int n,m;
cin>>n>>m;

adj=vector<vi>(n);
for(int i=0; i<m; i++){
	int a,b;
	cin>>a>>b;
	a--;
	b--;
	adj[a].pb(b);
}

color=vi(n,0);
for(int i=0; i<n; i++){
	if(color[i]==0){
		color[i]=1;
		dfs(i);
		
		if(!possible){
			cout<<"IMPOSSIBLE";
			return 0;
		}
	}
}

reverse(ans.begin(), ans.end());
for(auto x:ans) cout<<x+1<<endl;

return 0;
}
