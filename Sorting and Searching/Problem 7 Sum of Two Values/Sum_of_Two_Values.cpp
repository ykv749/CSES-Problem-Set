#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;

#define FOR(i,a, b) for (ll i=a; i<b; i++)
#define FORd(i,a, b) for (ll i=b; i>=a; i--)
#define all(x) x.begin(), x.end()
#define trav(x, a) for(auto& x : a)

#define F first
#define S second

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
 
void solve(){
    ll n,x; cin>>n>>x;
    
    vector<pair<ll,ll>>arr(n);
    FOR(i,0,n){
        cin>>arr[i].F;
        arr[i].S=i+1;
    }
    
    sort(all(arr));
    
    ll i=0,j=n-1;
    
    while(i<j){
        
        if(arr[i].F+arr[j].F==x){
            cout<<arr[i].S<<" "<<arr[j].S<<nl;
            return;
        }
        
        else if(arr[i].F+arr[j].F<x)
            i++;
        else  
            j--;
    }
    
    
    cout<<"IMPOSSIBLE"<<nl;
} 
 
int main()
{
    CP();
    solve();
 
}