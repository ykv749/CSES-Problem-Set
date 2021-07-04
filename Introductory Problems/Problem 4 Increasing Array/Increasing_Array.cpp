#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for (int i=a; i<b; i++)
 
void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 
 
}
 
void solve()
{   
    ll n; cin>>n;
    vector<ll>arr(n);
    for(auto& x:arr) cin>>x;
 
    ll res=0;
 
    FOR(i,1,n){
        if(arr[i]<arr[i-1]){
            res+=(arr[i-1]-arr[i]);
            arr[i]+=(arr[i-1]-arr[i]);
        }
    }
    cout<<res;
}
 
int main()
{
    CP();
    solve();
}