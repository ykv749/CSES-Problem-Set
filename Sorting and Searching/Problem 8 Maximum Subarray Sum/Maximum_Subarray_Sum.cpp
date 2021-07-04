#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long 
#define FOR(i,a,b) for (lli i=a; i<b; i++)
#define FORk(i,a,b,k) for (lli i=a; i<b; i+=k)
const int mod=1e9+7;

void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 
 
}

void solve(){
    ll n; cin>>n;
    
    ll res=INT_MIN,maxi=INT_MIN; 
    vector<ll>arr(n);

    for(auto& x:arr){
        cin>>x;
        maxi=max(x,x+maxi) ;
        res=max(res,maxi);   
    }

    cout<<res;
} 

int main()
{
    CP();
    solve();

}