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
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll t;
	cin >> t;
	ll n;
	cin >> n;
	vector<ll>v(n+1, 0);
	map<ll, ll> m;
	for (ll i = 1; i <= n; i++) {
		cin >> v[i];
	}
	for (ll i = 1; i <= n; i++) {
		v[i] = v[i - 1] + v[i];
	}
	for (ll i = 1; i <= n; i++) {
		for (ll j = i; j <= n; j++) {
			m[v[j] - v[i - 1]]++;
		}
	}
	ll b;
	cin >> b;
	vector<ll>v2(b + 1, 0);
	map<ll, ll, greater<ll>> m2; //내림차순
	for (ll i = 1; i <= b; i++) {
		cin >> v2[i];
	}
	for (ll i = 1; i <= b; i++) {
		v2[i] = v2[i - 1] + v2[i];
	}
	for (ll i = 1; i <= b; i++) {
		for (ll j = i; j <= b; j++) {
			m2[v2[j] - v2[i - 1]]++;
		}
	}
	
	map<ll, ll>::iterator iter1 = m.begin();
	map<ll, ll> ::iterator iter2 = m2.begin();

	ll ans = 0;
	while (iter1 != m.end() && iter2 != m2.end()) {
		if (iter1->first + iter2->first == t) {
			ans += iter1->second * iter2->second;
			iter1++;
			iter2++;
		}
		else if (iter1->first + iter2->first > t) {
			iter2++;
		}
		else {
			iter1++;
		}
	}
	cout << ans;

	return 0;
}