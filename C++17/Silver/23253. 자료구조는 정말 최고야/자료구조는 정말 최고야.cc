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
#include <cassert>
using ll = long long;
using namespace std;
ll inf = 1000000007;



int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n, m;
	cin >> n >> m;
	bool ans = true;
	for (ll i = 0; i < m; i++) {
		stack<ll>st;
		ll tmp;
		cin >> tmp;
		for (ll i = 0; i < tmp; i++) {
			ll tmp2;
			cin >> tmp2;
			st.push(tmp2);
		}
		ll a = st.top();
		st.pop();
		while (!st.empty()) {
			ll b = st.top();
			st.pop();
			if (a >= b) {
				ans = false;
				break;
			}
			a = b;
		}
	}
	if (ans)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}