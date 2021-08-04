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
    ll n; cin>>n;
    ll s=(n*(n+1))/2;

    vector<ll>a,b;
    if(s&1) { cout<<"NO"; return; }
    else {
        ll res=s/2; 
        FORd(i,1,n){
            if(i<=res) {
            a.push_back(i);
            res-=i;
            }
            else b.push_back(i);
        }
    }

    cout<<"YES"<<nl;
    cout<<a.size()<<nl;
    trav(x,a) cout<<x<<" ";

    cout<<nl;
    cout<<b.size()<<nl;
    trav(x,b) cout<<x<<" ";

}
 
int main()
{
    CP();
    int t=1; //cin>>t;
    while(t--)
        solve();
    
    return 0;
}