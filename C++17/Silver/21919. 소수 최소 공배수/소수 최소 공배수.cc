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

ll arr[1000001];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	arr[1] = 1;
	for (ll i = 2; i <=1000000; i++) {
		if (arr[i] == 1)
			continue;
		ll tmp = i*2;
		while (tmp <= 1000000) {
			arr[tmp] = 1;
			tmp += i;
		}
	}
	ll ans = 1;
	ll cnt = 0;
	v.erase(unique(v.begin(), v.end()), v.end());
	for (ll i = 0; i < v.size(); i++) {
		if (arr[v[i]] == 0)
		{
			ans *= v[i];
			cnt++;

		}
	}
	if (cnt == 0) {
		cout << "-1";
	}
	else
		cout << ans;
	return 0;
}
