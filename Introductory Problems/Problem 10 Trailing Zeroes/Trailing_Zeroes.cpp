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

lli trailingZeroes(lli N){
        lli res=0;
        for(lli i=5;i<=N;i=i*5)
        res+=N/i;
        
        return res;
}
 
void solve()
{   
    lli n; cin>>n;
    cout<<trailingZeroes(n);
}
 
int main()
{
    CP();
    solve();

}