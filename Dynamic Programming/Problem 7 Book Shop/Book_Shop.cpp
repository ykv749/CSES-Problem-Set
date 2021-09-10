#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long long int lli;
 
#define FOR(i,a, b) for (ll i=a; i<b; i++)
#define FORd(i,a, b) for (ll i=b; i>=a; i--)
#define all(x) x.begin(), x.end()
#define trav(x, a) for(auto& x : a)
 
const int mod=1e9+7;
const char nl='\n';
 
void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 
 
}
 
void solve(){ 
    
    int n,x; cin>>n>>x;
    vector<int>wt(n),val(n);
    trav(q,wt) cin>>q;
    trav(q,val) cin>>q;
 
 
    vector<int>dp(x+1,0);
    FOR(i,1,n+1){
        FORd(w,0,x){
			if(wt[i-1]<=w)
			    dp[w]=max(dp[w],dp[w-wt[i-1]]+val[i-1]);
		}
	}
	
	cout<<dp[x]<<nl;
    
}   
 
int main()
{
    CP();
    int t=1; //cin>>t;
    while(t--)
        solve();
    
    return 0;
}