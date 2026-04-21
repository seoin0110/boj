#define _USE_MATH_DEFINES
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

ll par[1000];

ll find(ll a) {
	if (par[a] < 0)
		return a;
	return par[a] = find(par[a]);
}

bool merge(ll a, ll b) {
	ll x = find(a);
	ll y = find(b);
	if (x != y) {
		par[x] = y;
		return true;
	}
	else
		return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cout << fixed;
	cout.precision(12);
	ll n;
	cin >> n;
	vector<pair<pair<double, double> ,double> >v(n);
	for (ll i = 0; i < n; i++) {
		par[i] = -1;
	}
	for (ll i = 0; i < n; i++) {
		double x, y, r;
		cin >> x >> y >> r;
		v[i].first.first = x;
		v[i].first.second = y;
		v[i].second = r;
	}
	vector < pair<double, pair<ll, ll> > >arr;
	for (ll i = 0; i < n; i++) {
		for (ll j = i + 1; j < n; j++) {
			pair<double, pair<ll, ll> > tmp;
			tmp.second.first = i;
			tmp.second.second = j;
			tmp.first = 0;
			double c = sqrt((v[i].first.first - v[j].first.first)* (v[i].first.first - v[j].first.first) + (v[i].first.second - v[j].first.second)* (v[i].first.second - v[j].first.second));
			if (c <= v[i].second + v[j].second)
				tmp.first = 0;
			else {
				double a = abs(v[i].second - v[j].second);
				double b = sqrt(c*c - a * a);
				tmp.first += 2*b;
				if (v[i].second == v[j].second) {
					tmp.first += 2 * M_PI * v[i].second;
				}
				else {
					tmp.first += 2*(M_PI - acos(a/c)) * max(v[i].second, v[j].second);
					tmp.first += (M_PI - 2*acos(b / c)) * min(v[i].second, v[j].second);
				}
			}
			arr.push_back(tmp);
		}
	}
	sort(arr.begin(), arr.end());
	ll cnt = 0;
	double ans = 0;
	for (auto i : arr) {
		if (cnt == n - 1)
			break;
		if (merge(i.second.first, i.second.second)) {
			cnt++;
			ans += i.first;
		}
	}
	cout << ans;
	return 0;
}