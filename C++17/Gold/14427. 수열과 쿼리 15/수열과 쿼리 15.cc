#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cstring>
using ll = long long;
using namespace std;
//ll arr[100000];
pair<ll,ll> seg[4000000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n, q;
	cin >> n;
	ll base = 1;
	for (base = 1; base < n; base *= 2);
	for (ll i = 0; i < n; i++) {
		seg[base + i].first = i+1;
		cin >> seg[base + i].second;
	}
	
	for (ll i = base - 1; i >= 0; i--) {
		if (seg[i * 2].second < seg[i * 2 + 1].second)
			seg[i] = seg[i * 2];
		else if (seg[i * 2].second == seg[i * 2 + 1].second && seg[i * 2].first < seg[i * 2 + 1].first) {
			seg[i] = seg[i * 2];
		}
		else
			seg[i] = seg[i * 2 + 1];
	}
	cin >> q;
	while (q--) {
		ll a, b, c;
		cin >> a;
		if (a == 1) {
			cin >> b >> c;
			b = base + b - 1;
			seg[b].second = c;
			b /= 2;
			while (b > 0) {
				if (seg[2 * b].second <= seg[2 * b + 1].second) {
					seg[b] = seg[2 * b];
				}
				else {
					seg[b] = seg[2 * b + 1];
				}
				b /= 2;
			}
		}
		else {
			b = 1;
			c = n;
			pair<ll, ll> ans = seg[base + b - 1];
			b = base + b - 1;
			c = base + c - 1;
			while (b <= c) {
				if (b % 2 == 1) {
					if (seg[b].second < ans.second) {
						ans = seg[b];
					}
					else if( seg[b].second == ans.second && seg[b].first < ans.first)
						ans = seg[b];
					b++;
				}
				if (c % 2 == 0) {
					if (seg[c].second < ans.second) {
						ans = seg[c];
					}
					else if (seg[c].second == ans.second && seg[c].first < ans.first)
						ans = seg[c];
					c--;
				}
				b /= 2;
				c /= 2;
			}
			cout << ans.first << '\n';

		}
		


	}
	return 0;
}