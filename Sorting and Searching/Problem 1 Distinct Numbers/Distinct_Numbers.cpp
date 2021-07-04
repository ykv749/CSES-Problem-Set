#include<bits/stdc++.h>
using namespace std;
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
    long int n,inn; cin>>n;
    set<int>k;
    
    FOR(i,0,n) { cin>>inn; k.insert(inn); }
 
    cout<<k.size();
    
}
 
int main()
{
    CP();
    solve();
}