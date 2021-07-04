#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long 
#define FOR(i,a,b) for (lli i=a; i<b; i++)
#define FORk(i,a,b,k) for (lli i=a; i<b; i+=k)
#define all(x) x.begin(), x.end()
const int mod=1e9+7;
 
void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 
 
}

char arr[1001][1001];
int n,m,ans=0;

void dfs(int x,int y){
    if(x<0 || y<0 || x>=n || y>=m || arr[x][y]!='.') return;

    arr[x][y]='x';

    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
}

void solve()
{   
    cin>>n>>m;
    FOR(i,0,n) FOR(j,0,m) cin>>arr[i][j];
    FOR(i,0,n) FOR(j,0,m) 
    if(arr[i][j]=='.'){
        dfs(i,j);
        ans++;
    }
        
    cout<<ans;
}
 
int main()
{
    CP();
    solve();
    
}