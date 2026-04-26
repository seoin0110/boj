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

//vector<ll>v[2];

typedef struct {
	double a;
	double b;
}star;
typedef struct {
	ll a; //시작 점
	ll b; //끝 점
	double c; //거리
}str;
bool cmp(str a, str b) {
	if (a.c < b.c)
		return true;
	return false;
}
vector<ll>par(101, -1);
ll find(ll a) {
	if (par[a] < 0) {
		return a;
	}
	return find(par[a]);
}

bool uni(ll a, ll b) {
	ll x = find(a);
	ll y = find(b);
	if (x == y) {
		return false;
	}
	par[x] = y;
	return true;
}

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	
	cin >> n;
	vector<str>v;
	vector<star>sta(n);
	for (ll i = 0; i < n;i++) {
		cin >> sta[i].a >> sta[i].b;
	}
	ll k = 0;
	for (ll i = 0; i < n;i++) {
		for (ll j = i + 1;j < n;j++) {
			v.resize(k+1);
			v[k].a = i;
			v[k].b = j;
			v[k].c = sqrt((sta[i].a - sta[j].a) * (sta[i].a - sta[j].a) + (sta[i].b - sta[j].b) * (sta[i].b - sta[j].b));
			k++;
		}
	}
	sort(v.begin(), v.end(), cmp);
	double ans = 0;
	ll count = 0;
	for (ll i = 0; i < v.size();i++) {
		if (count > n-1)
			break;
		if (!uni(v[i].a, v[i].b))
			continue;
		//cout << v[i].a << ' ' << v[i].b << ' ' << v[i].c << '\n';
		ans += v[i].c;
		count++;
	}
	cout << ans << '\n';
    return 0;
}