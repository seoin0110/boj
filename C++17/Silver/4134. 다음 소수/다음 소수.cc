#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using PP = pair<ll, P>;
const ll n_ = 1e6 + 505, inf = (ll)2e9 * (ll)1e9 + 7, mod = 998244353;
ll n, m, tc = 1, a, b, c, d, sum, x, y, z, base, ans, k;
bool pr(ll x){
	if(x<=1)return false;
	if(x==2)return true;
	if(!(x%2))return false;
	for(ll i=3;i*i<=x;i+=2){
		if(!(x%i))return false;
	}
	return true;
}
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		while(!pr(a))a++;
		cout<<a<<'\n';
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
#endif
	//cin >> tc;
	while (tc--)solve();
}