#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

pair<ll,ll> on[41];
pair < ll,ll> func(ll n) {
	if (n == 0) {
		return on[0];
	}
	else if (n == 1) {
		return on[1];
	}
	else if (on[n].first != 0 || on[n].second != 0)
		return on[n];
	return on[n] = { func(n - 1).first + func(n - 2).first,func(n - 1).second + func(n - 2).second };
}
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	ll n;
	ll k;
	cin >> n;
	on[0] = { 1,0 };
	on[1] = { 0,1 };
	//func(40);
	for (ll i = 0;i < n;i++) {
		cin >> k;
		pair<ll, ll> ans = func(k);
		cout << ans.first << ' ' << ans.second << '\n';
	}
    return 0;
}