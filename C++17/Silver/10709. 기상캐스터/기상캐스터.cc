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
	ll a, b;
	cin >> a >> b;
	vector<string>v(a);
	for (ll i = 0; i < a; i++) {
		cin >> v[i];
	}
	for (ll i = 0; i < a; i++) {
		ll flag = 0;
		ll ans = 0;
		for (ll j = 0; j < b; j++) {
			if (v[i][j] == 'c') {
				flag = 1;
				ans = 0;
				cout << "0 ";
			}
			else if(flag == 0 && v[i][j] == '.') {
				cout << "-1 ";
			}
			else {
				ans++;
				cout << ans << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}