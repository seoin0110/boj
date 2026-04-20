#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n,ans=0;
	cin>>n;
	vector<ll>v(n),chk(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		ans+=v[i];
	}
	cout<<ans<<'\n';
	cin>>n;
	for(int i=0;i<n;i++){
		ll a,b,c;
		cin>>a;
		if(a==1){
			cin>>b>>c;
			if(!chk[b-1]){
				ans-=v[b-1];
				ans+=c;
			}
			v[b-1]=c;
		}
		else{
			cin>>b;
			b--;
			if(chk[b])ans+=v[b];
			else ans-=v[b];
			chk[b]^=1;
		}
		cout<<ans<<'\n';
	}
}