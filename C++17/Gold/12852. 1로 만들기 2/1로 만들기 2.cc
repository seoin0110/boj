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

pair<ll,ll> dp[1000001];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	dp[n] = { 1,0 };
	queue<ll>q;
	q.push(n);
	while (!q.empty()) {
		ll tmp = q.front();
		q.pop();
		if (tmp == 1)
			break;
		if (tmp % 3 == 0) {
			q.push(tmp / 3);
			if (dp[tmp / 3].first == 0 || (dp[tmp / 3].first && dp[tmp / 3].first > dp[tmp].first + 1)) {
				dp[tmp / 3] = { dp[tmp].first + 1, 1 };
			}
		}
		if (tmp % 2 == 0) {
			q.push(tmp / 2);
			if (dp[tmp / 2].first == 0 || (dp[tmp / 2].first && dp[tmp / 2].first > dp[tmp].first + 1)) {
				dp[tmp / 2] = { dp[tmp].first + 1, 2 };
			}
		}
		q.push(tmp - 1);
		if (dp[tmp - 1].first == 0 || (dp[tmp - 1].first && dp[tmp - 1].first > dp[tmp].first + 1)) {
			dp[tmp-1] = { dp[tmp].first + 1, 3 };
		}
	}
	stack<ll>ans;
	ll tmp = 1;
	ans.push(tmp);
	while (tmp != n) {
		if (dp[tmp].second == 1) {
			tmp *= 3;
		}
		else if (dp[tmp].second == 2) {
			tmp *= 2;
		}
		else
			tmp += 1;

		ans.push(tmp);
	}
	cout << ans.size() - 1 << '\n';
	while (!ans.empty()) {
		cout << ans.top() << ' ';
		ans.pop();
	}
	return 0;
}