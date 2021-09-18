#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long long int lli;
 
#define FOR(i,a, b) for (int i=a; i<b; i++)
#define FORd(i,a, b) for (int i=b; i>=a; i--)
#define all(x) x.begin(), x.end()
#define trav(x, a) for(auto& x : a)
 
const int mod=1e9+7;
const char nl='\n';
 
void CP()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 
 
}

const int N=1e6+1;
vector<int>freq(N,0);

void solve(){ 
    
    int n; cin>>n;
    map<int,int>mp;
    FOR(i,0,n) {
        int x; cin>>x;
        freq[x]++;
    }

    int res=1;
    FOR(i,1,N){
        int cnt=0;
        for(int j=i; j<N; j+=i){
            cnt+=freq[j];
        }

        if(cnt>=2){
            res=max(res,i);
        }
    }

    cout<<res<<nl;
    
}   
 
int main()
{
    CP();
    int t=1; //cin>>t;
    while(t--)
        solve();
    
    return 0;
}