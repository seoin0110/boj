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

ll arr[100000];
vector<ll>v[100000];

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n, k;
	cin >> n >> k;
	for (ll i = 0; i < n - 1; i++) {
		ll a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		arr[i] = a;
	}
	queue<pair<ll, ll> >q;
	q.push({ 0,0 });
	while (!q.empty()) {
		pair <ll,ll> a = q.front();
		q.pop();
		if (arr[a.first] == k) {
			cout << a.second;
			break;
		}
		else {
			arr[a.first] = -k;
		}
		for (auto x : v[a.first]) {
			if(arr[x] >=0)
				q.push({ x,a.second + 1 });
		}
	}
	return 0;
}