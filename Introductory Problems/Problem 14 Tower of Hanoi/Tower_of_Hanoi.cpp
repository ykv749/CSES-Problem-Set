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

void toh(int a, int b, int c, int n) {
	if(n==0)  return;
	toh(a,c,b,n-1);
	cout<<a<<' '<<c<<nl;
	toh(b,a,c,n-1);
}

void solve(){   
    int n; cin>>n;
    cout<<((1<<n)-1)<<nl;
    toh(1,2,3,n);
}
 
int main()
{
    CP();
    int t=1; //cin>>t;
    while(t--)
        solve();
    
    return 0;
}