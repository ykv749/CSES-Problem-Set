#include<bits/stdc++.h>
using namespace std;
#define lli long long int
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

lli power(lli a,lli b,lli p)
{
    lli ans=1;
    while(b>0)
    {
        if(b&1) ans=(ans*a)%p;
        a=(a*a)%p;
        b>>=1;
        b%=p;
    }
    return ans%p;
}

lli Calculate(lli a, lli b,lli c, lli m)
{
    lli res,ans;
 
    res=power(b,c,m-1);
    ans=power(a,res,m);
 
    return ans%mod;
}

void solve()
{   
    lli a,b,c; cin>>a>>b>>c;
    cout<<Calculate(a,b,c,mod)<<endl;
}
 
int main()
{
    CP();
    int t; cin>>t;
    while(t--)
        solve();

}