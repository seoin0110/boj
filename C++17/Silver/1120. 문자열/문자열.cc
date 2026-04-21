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
#define ll long long
using namespace std;

ll inf = 1000000007;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	ll ans = inf;
	for (ll i = 0; i < s2.length() - s1.length() + 1; i++) {
		ll tmp = 0;
		for (ll j = 0; j < s1.length(); j++) {
			if (s1[j] != s2[i + j])
				tmp++;
		}
		ans = min(ans, tmp);
	}
	cout << ans;
	return 0;
}