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
    
    int n; cin>>n;  
    char grid[n][n];
    
    FOR(i,0,n)
        FOR(j,0,n){
            cin>>grid[i][j];
        }
    int dp[n][n];

    FOR(i,0,n){
        dp[i][0]=1;
        if(grid[i][0]=='*'){
            while(i<n){
                dp[i][0]=0;
                i++;
            }
        }
    }

    FOR(i,0,n){
        dp[0][i]=1;
        if(grid[0][i]=='*'){
            while(i<n){
                dp[0][i]=0;
                i++;
            }
        }
    }

    FOR(i,1,n){
        FOR(j,1,n){
            if(grid[i][j]=='*') {
                dp[i][j]=0;
                continue;
            }
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
        }
    }

    cout<<(dp[n-1][n-1]%mod)<<nl;
    
}   
 
int main()
{
    CP();
    int t=1; //cin>>t;
    while(t--)
        solve();
    
    return 0;
}