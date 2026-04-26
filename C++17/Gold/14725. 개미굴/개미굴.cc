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

set<string>s;
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		string tmp = "";
		for (ll j = 0; j < a; j++) {
			string tmp_s;
			cin >> tmp_s;
			tmp += "*" + tmp_s;
			s.insert(tmp);
		}
	}
	for (auto i : s) {
		ll cnt = 0;
		ll idx = 0;
		for (ll j = 0; j < i.size(); j++) {
			if (i[j] == '*') {
				cnt++;
				idx = j;
			}
		}
		for (ll j = 0; j < cnt - 1; j++)
			cout << "--";
		for (ll j = idx + 1; j < i.size(); j++)
			cout << i[j];
		cout << '\n';
	}
	return 0;
}