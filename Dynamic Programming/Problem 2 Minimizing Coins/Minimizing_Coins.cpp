#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long long int lli;
 
#define FOR(i,a, b) for (ll i=a; i<b; i++)
#define FORd(i,a, b) for (ll i=b; i>=a; i--)
#define all(x) x.begin(), x.end()
#define trav(x, a) for(auto& x : a)
 
const int mod=1e9+7;
const char nl = '\n';
 
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
    vector<int> arr(n);
    trav(x,arr) cin>>x;

    vector<int> dp(x+1,mod);
    dp[0]=0;
    FOR(i,1,x+1)
        FOR(j,0,n)
            if (i-arr[j]>=0)
                dp[i]=min(dp[i],dp[i-arr[j]]+1);
                
    cout<<(!(dp[x]^mod)?-1:dp[x])<<nl;
    
}   
 
int main()
{
    CP();
    int t=1; //cin>>t;
    while(t--)
        solve();
    
    return 0;
}