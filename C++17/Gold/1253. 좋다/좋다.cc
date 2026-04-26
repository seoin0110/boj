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
using namespace std;
using ll = long long;
//1253 좋다 문제

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	ll n;
	ll ans = 0;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n;i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	for (ll i = 0; i < n;i++) {
		ll l = 0;
		ll f = n - 1;
		while (l<f) {
			if (v[i] > v[l] + v[f])
			{
				l++;
				continue;
			}
			else if (v[i] < v[l] + v[f])
			{
				f--;
				continue;
			}
			else {
				if (i == l)
				{
					l++;
					continue;
				}
				else if (i == f) {
					f--;
					continue;
				}
				else {
					ans++;
					break;
				}
			}

		}

	}

	cout << ans << '\n';
}
