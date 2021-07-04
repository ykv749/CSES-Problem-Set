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
 
void solve(){   
    ll x1,y1,x2,y2,x3,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
    x2-=x1;
    y2-=y1;
    x3-=x1;
    y3-=y1;
    ll cross_product=x3*y2-x2*y3;
    if(cross_product<0) cout<<"LEFT";
    else if(cross_product>0) cout<<"RIGHT";
    else cout<<"TOUCH";
    cout<<endl;
}
 
int main()
{
    CP();
    int t; cin>>t;
    while(t--)
        solve();
    
    return 0;
}