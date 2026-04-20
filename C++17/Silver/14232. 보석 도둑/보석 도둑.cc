#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n;
	vector<ll>res;
	for(ll i=2;i*i<=n;i++){
		if(n%i)continue;
		ll a=i,b=n/i;
		while(!(n%a))n/=a,res.push_back(a);
		//while(!(n%b))n/=b,res.push_back(b);
	}
	if(n!=1)res.push_back(n);
	cout<<res.size()<<endl;
	sort(res.begin(),res.end());
	for(auto nxt:res)cout<<nxt<<' ';
}