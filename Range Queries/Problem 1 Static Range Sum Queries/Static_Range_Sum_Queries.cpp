#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define FOR(i,a, b) for (ll i=a; i<b; i++)
const int mod=1e9+7;
 
void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 
 
}
 
void preCompute(vector<ll>arr,vector<ll>&pref,ll n){
    pref[1]=arr[1];
    FOR(i,2,n+1) pref[i]=arr[i]+pref[i-1];     
}
 
void solve(){   
    ll n,q; cin>>n>>q;
    vector<ll>arr(n+1),pref(n+1); 
 
    FOR(i,1,n+1) cin>>arr[i]; 
    preCompute(arr,pref,n);
 
    FOR(i,1,q+1){
        ll x,y; cin>>x>>y;
        cout<<pref[y]-pref[x-1]<<endl;
    }
}
 
int main()
{
    CP();
    solve();
    
    return 0;
}