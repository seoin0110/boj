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
	string s;
	cin >> s;
	ll l = 0;
	ll r = s.length() - 1;
	ll ans = 0;
	ll cntR = 0;
	for (ll i = 0; i < s.length(); i++) {
		if (s[i] == 'R')
			cntR++;
	}
	ans = cntR;
	if (cntR == 0) {
		cout << "0";
		return 0;
	}
	ll cnt = 0;
	while (l < r) {
		if (s[l] == 'K' && s[r] == 'K'){
			cnt += 2;
			if(cntR> 0)
				ans = max(ans, cnt + cntR);
			l++;
			r--;
		}
		else {
			if (s[l] == 'R') {
				cntR--;
				l++;
			}
			if (s[r] == 'R') {
				cntR--;
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}

