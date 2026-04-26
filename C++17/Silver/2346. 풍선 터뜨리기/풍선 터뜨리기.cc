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
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	

	ll n;
	deque<pair<ll,ll>>dq;
	cin >> n;
	ll i,j;
	for (ll i = 1; i <= n;i++)
	{
		ll j;
		cin >> j;
		dq.push_back({ i, j });
	}

	while (!dq.empty()) {
		i = dq.front().first;
		j = dq.front().second;
		cout << i << ' ';
		dq.pop_front();
		if (dq.empty())
			break;
		if(j > 0)
		for (ll k = 0; k < j-1;k++) {
			dq.push_back(dq.front());
			dq.pop_front();
		}
		else
		{
			j = -j;
			for (ll k = 0; k < j;k++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}

	}
    return 0;
}