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
    int n,inn; cin>>n;
    int x1=0,x2=0;
 
    FOR(i,0,n-1) { cin>>inn; x1^=inn;}
 
    FOR(i,1,n+1) { x2^=i; }
 
    cout<<(x1^x2);
 
}
 
int main()
{
    CP();
    solve();
}