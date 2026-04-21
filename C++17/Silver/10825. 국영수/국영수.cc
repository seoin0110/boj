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
using namespace std;
using ll = long long;

typedef struct {
	string s;
	ll a;
	ll b;
	ll c;
}str;

bool cmp(str a, str b) {
	if (a.a > b.a)return true;
	else if (a.a < b.a)return false;
	if (b.b > a.b)return true;
	else if (b.b < a.b)return false;
	if (a.c > b.c) return true;
	else if (a.c < b.c) return false;
	if (b.s > a.s)return true;
	else return false;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<str>v(n);
	for (ll i = 0; i < n;i++) {
		cin >> v[i].s >> v[i].a >> v[i].b >> v[i].c;
	}
	sort(v.begin(), v.end(), cmp);

	for (ll i = 0; i < n;i++) {
		cout << v[i].s << '\n';
	}
	return 0;
}