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
	ll mmax = 0;
	ll max, min;
	cin >> n;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	min = v[0];
	for (ll i = 1;i < n;i++)
	{
		if (v[i] > v[i - 1])
		{
			max = v[i];
			if (max - min > mmax)
				mmax = max - min;
		}
		else
		{
			min = v[i];
		}
	}
	cout << mmax << '\n';

    return 0;
}