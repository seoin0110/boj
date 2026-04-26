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
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		string s;
		cin >> s;
		vector<ll>v[26];
		for (ll j = 0; j < s.length(); j++)
		{
			v[s[j] - 'a'].push_back(j);
		}
		ll a;
		cin >> a;
		ll max_ = -1;
		ll min_ = s.length();
		for (ll b = 0; b < 26; b++) {
			for (ll c = 0; c < v[b].size(); c++) {
				if (c - a + 1 >= 0) {
					max_ = max(v[b][c] - v[b][c - a + 1], max_);
					min_ = min(v[b][c] - v[b][c - a + 1], min_);
				}
			}
		}
		if (max_ == -1) {
			cout << "-1\n";
			continue;
		}
		else {
			cout << min_+1 << ' ' << max_+1 << '\n';
		}
	}
	return 0;
}

