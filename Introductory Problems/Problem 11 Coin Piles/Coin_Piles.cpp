#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
 
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
    ll a,b; cin>>a>>b;
    if(b>a) swap(a,b);
    
    if(a>2*b or (a+b)%3!=0){
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
    }

}
 
int main()
{
    CP();
    int t; cin>>t;
    while(t--)
        solve();
 
}