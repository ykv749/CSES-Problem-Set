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
    string s; cin>>s;
    int cnt=1,mx=1;
    int n=s.size()-1;
    
    FOR(i,0,n){
    
        if(!(s[i]^s[i+1])) cnt+=1;
        else cnt=1;
        mx=max(mx,cnt);
    }   
    cout<<mx;
}
 
int main()
{
    CP();
    solve();
}