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

ll par[100001];
typedef struct st {
	ll a;
	ll b;
	ll c;
};
int find(int x) {
	if (par[x] < 0)return x;
	else
		return par[x] = find(par[x]);
}
bool merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y)return false;
	else {
		par[y] = x;
		return true;
	}
}
bool cmp(const st& s1, const st& s2) {
	return s1.c < s2.c;
}
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll v, e;
	cin >> v >> e;
	vector<st>tree(e);
	for (ll i = 0; i <= v;i++) {
		par[i] = -1;
	}
	for (ll i = 0;i < e;i++) {
		ll tmp1, tmp2, tmp3;
		cin >> tmp1 >> tmp2 >> tmp3;
		tree[i].a = tmp1;
		tree[i].b = tmp2;
		tree[i].c = tmp3;
	}
	ll n = 0;
	sort(tree.begin(), tree.end(), cmp);
	ll i = 0;
	ll max = 0;
	ll sum = 0;
	while (n <= v-1 && i < e) {
		if (merge(tree[i].a,tree[i].b)) {
			if (tree[i].c > max)
				max = tree[i].c;
			sum += tree[i].c;
			n++;
		}
		i++;
	}

	cout << sum - max << '\n';
    return 0;
}