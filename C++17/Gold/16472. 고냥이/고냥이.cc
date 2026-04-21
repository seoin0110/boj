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
ll alp[26];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll l = 0;
	ll r = 1;
	if (s.size() == 1) {
		cout << "1";
		return 0;
	}
	ll ans = 2;
	alp[s[0] - 'a']++;
	alp[s[1] - 'a']++;
	while (l < r && l < s.size() && r < s.size()) {
		ll cnt = 0;
		for (ll i = 0; i < 26; i++) {
			if (alp[i] > 0)cnt++;
		}
		if (cnt > n) {
			alp[s[l] - 'a']--;
			l++;
		}
		else {
			ans = max(ans, r - l + 1);
			r++;
			if(r < s.size())
				alp[s[r] - 'a']++;
		}
	}
	cout << ans;
	return 0;
}

