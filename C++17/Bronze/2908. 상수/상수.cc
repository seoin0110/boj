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
	string s1, s2;
	cin >> s1 >> s2;
	for (ll i = 2; i >=0; i--) {
		if (s1[i] > s2[i]) {
			ans = 0;
			break;
		}
		else if(s1[i]<s2[i]){
			ans = 1;
			break;
		}
	}
	if (ans == 0)
	{
		for (ll i = 2;i >= 0;i--) {
			cout << s1[i];
		}
		cout << '\n';
	}
	else
	{
		for (ll i = 2;i >= 0;i--) {
			cout << s2[i];
		}
		cout << '\n';
	}
    return 0;
}