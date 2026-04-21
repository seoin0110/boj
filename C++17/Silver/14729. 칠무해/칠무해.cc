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
	cout << fixed;
	cout.precision(3);
	cin >> n;
	vector<float>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (ll i = 0; i < 7; i++) {
		cout << v[i] << '\n';
	}
	return 0;
}