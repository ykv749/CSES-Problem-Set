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
    vector<int>arr(n);
    trav(q,arr) cin>>q;
    
    vector<ll>dp(x+1,0);
	dp[0]=1;
	trav(q,arr){
        for(int j=q;j<x+1;++j)
            dp[j]=(dp[j]+dp[j-q])%mod;
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