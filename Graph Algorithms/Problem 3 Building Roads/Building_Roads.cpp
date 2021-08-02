#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long 
#define FOR(i,a,b) for (lli i=a; i<b; i++)
#define FORk(i,a,b,k) for (lli i=a; i<b; i+=k)
#define all(x) x.begin(), x.end()
#define pb push_back
const int mod=1e9+7;
 
void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 
 
}

const int MAXN=1e5+1;
vector<int> adj[MAXN];
vector<bool> vis(MAXN,0);
 
void dfs(int node){
	vis[node]=1;
	
	for(int x:adj[node])
	if(vis[x]==0) 
        dfs(x);
}

void solve()
{   
    int n,m;
	cin>>n>>m;

	vector<int>res;
	
	FOR(i,1,m+1) {
        int u,v;
        cin>>u>>v; 
        adj[u].pb(v),adj[v].pb(u);
    }
	
	FOR(i,1,n+1)
	    if(vis[i]==0){
           dfs(i);
           res.pb(i);     
        }
	
    int c=res.size();
	cout<<c-1<<'\n';
    FOR(i,1,c){
        cout<<res[i-1]<<" "<<res[i]<<'\n';
    }
	
}
 
int main()
{
    CP();
    solve();
    
}