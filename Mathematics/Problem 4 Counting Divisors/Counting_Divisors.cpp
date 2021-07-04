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

const int k=1e6+1;
vector<int>res(k,0);

void func(){
    FOR(i,1,k) FORk(j,i,k,i) res[j]++;
}

void solve(){
    ll n; cin>>n;

    cout<<res[n]<<endl;
} 

int main()
{
    CP();
    func();
    int t; cin>>t;
    while(t--)
        solve();

}