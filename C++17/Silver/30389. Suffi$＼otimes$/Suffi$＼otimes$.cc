#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using PP = pair<ll, P>;
ll n, m, tc = 1, a, b, c, d, sum, x, y, z, base, ans,k;
void solve() {
	cin>>n;
	map<string,int>mp;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		for(int j=0;j<s.size();j++){
			string t=s.substr(j,s.size()-j);
			mp[t]++;
		}
	}
	for(auto nxt:mp){
		if(nxt.second%2)ans++;
	}
	cout<<ans<<endl;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	solve();
}