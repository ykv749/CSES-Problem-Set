#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define FOR(i,a, b) for (ll i=a; i<b; i++)
#define all(x) x.begin(), x.end()
#define trav(x, a) for(auto& x : a)
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
    int n; cin>>n;
    vector<pair<int,int>>arr;

    if(n<4){
        if(!(n^1)) cout<<1;
        else cout<<"NO SOLUTION";
        return;
    }
    
    FOR(i,1,n+1){
        arr.push_back({i&1,i});
    }

    sort(all(arr));
    trav(x,arr)
        cout<<x.second<<" ";
}
 
int main()
{
    CP();
    int t=1; //cin>>t;
    while(t--)
        solve();
    
    return 0;
}