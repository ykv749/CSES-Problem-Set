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
    
    cout<<n<<" ";
    
    while(n!=1){
        if(n&1) n=3*n+1;
        else n>>=1;
        cout<<n<<" ";
    }
}
 
int main()
{
    CP();
    solve();
}