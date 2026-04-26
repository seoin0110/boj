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
	vector<ll>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll chk = 1;
	ll cnt = 1;
	for (ll i = 0; i < n-1; i++) {
		if (v[i] == v[i + 1]) {
			if (chk > 1)
			{
				chk++;
				cnt = max(cnt, chk);
			}
			else {
				chk = 2;
				cnt = max(cnt, chk);

			}
		}
		else
			chk = 1;
		
	}
	cout << cnt;
	return 0;
}