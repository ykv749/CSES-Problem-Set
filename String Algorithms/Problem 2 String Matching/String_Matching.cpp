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

void computeLPSArray(string pat,ll M,ll lps[])
{
	ll len=0;
	ll i=1;
	lps[0]=0;
 
	while(i<M){
		if(pat[i]==pat[len]){ len++; lps[i]=len; i++; }

		else{
			if(len!=0) len=lps[len-1];
			else { lps[i]=len; i++; }
		}
	}
}
 
int KMPSearch(string pat, string txt){
	ll M=pat.length();
	ll N=txt.length();
 
	ll lps[M];
	ll j=0; 
 
	computeLPSArray(pat,M,lps);
 
	ll i=0; 
	ll res=0;
 
	while(i<N)
	{
		if(pat[j]==txt[i]){ j++; i++; }

		if(j==M){ j=lps[j-1]; res++;}
 
		else if(i<N and pat[j]!=txt[i]){
			if(j!=0) j=lps[j-1];
			else i=i+1;
		}
	}
	return res;
}
 
void solve()
{   
   	string s; cin>>s;
	string z; cin>>z;
 
	ll ans=KMPSearch(z,s);
	
	cout<<ans;
}
 
int main()
{
    CP();
    solve();
    
}