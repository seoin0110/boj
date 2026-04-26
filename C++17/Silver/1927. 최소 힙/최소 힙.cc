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
	cin >> n;
	vector<ll>v(n);
	priority_queue<ll,vector<ll>,greater<>>pq;
	for (ll i = 0; i < n;i++) {
		cin >> v[i];
		if (v[i] == 0) {
			if (pq.empty())
			{
				cout << "0\n";
			}
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}

		}
		else
		{
			pq.push(v[i]);
		}
	}


    return 0;
}