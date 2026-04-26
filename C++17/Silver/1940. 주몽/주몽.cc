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
	cin >> n;
	ll k;
	cin >> k;
	vector<ll>v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	ll l = 0;
	ll r = n - 1;
	ll ans = 0;
	while (l < r) {
		if (v[l] + v[r] == k)
		{
			ans++;
			l++;
			r--;
		}
		else if(v[l]+v[r]<k){
			l++;
		}
		else {
			r--;
		}
	}
	cout << ans;
	return 0;
}