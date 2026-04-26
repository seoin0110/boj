#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <functional>
#include <string>

using namespace std;
using ll = long long;


int main() {

	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	string s;
	string ans = "";
	cin >> s;
	ll n = s.size();
	ll cnt = 0;
	for (ll i = 0; i < n; i++) {
		if (s[i] == 'X') {
			cnt++;
			if (cnt == 4) {
				ans += "AAAA";
				cnt = 0;
			}
		}
		else {
			if (cnt == 4) {
				ans += "AAAA";
				cnt = 0;
			}
			else if (cnt == 2) {
				ans += "BB";
				cnt = 0;
			}
			else if (cnt == 0){
				cnt = 0;
			}
			else {
				cout << "-1";
				return 0;
			}
			ans += ".";
		}	
	}
	if (cnt == 4) {
		ans += "AAAA";
	}
	else if (cnt == 2) {
		ans += "BB";
	}
	else if(cnt!=0){
		cout << "-1";
		return 0;
	}
	cout << ans;
	return 0;
}
