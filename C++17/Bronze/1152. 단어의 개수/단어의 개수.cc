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
	ll ans = 0;
	ll check = 1;
	string s;
	getline(cin, s);
	for (ll i = 0; i < s.length();i++) {
		if (s[i]!=' '&& check == 1) {
			ans++;
			check = 0;
		}
		if (s[i] == ' ')
			check = 1;
		
	}
	cout << ans << '\n';
    return 0;
}