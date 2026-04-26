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
using P = pair<ll, ll>;
using PP = pair<ll, P>;
const ll n_ = 1e5 + 100, inf = 1e18, mod = 1e9 + 7;
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	ll ans = 0;
	cin >> n;
	for (ll i = 0; i < n;i++) {
		ll check = 1;
		string s;
		cin >> s;
		vector<ll>v(26, -1);
		for (ll j = 0; j < s.length();j++) {
			if (v[s[j] - 'a'] == -1)
				v[s[j] - 'a'] = j;
			else
			{
				if (v[s[j] - 'a'] == j - 1) {
					v[s[j] - 'a'] = j;
					continue;
				}
				else
					check = 0;
			}
		}
		if (check == 1)
			ans++;
		else
			check = 1;
	}
	cout << ans << '\n';
    return 0;
}