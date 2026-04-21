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

string s[100];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> s[i];
	}
	ll ans = 0;
	ll ans2 = 0;
	for (ll i = 0; i < n; i++) {
		ll j = 0;
		ll cnt = 0;
		while (j < n - 1) {
			if (s[i][j] == '.' && s[i][j + 1] == '.' && cnt == 0) {
				ans++;
				cnt = 1;
			}
			if (s[i][j] == 'X')
				cnt = 0;
			j++;
		}
		/*
		for (ll j = 0; j < n - 1; j++) {
			if (s[i][j] == '.' && s[i][j + 1] == '.')
				ans++;
			break;
		}
		*/
	}
	for (ll i = 0; i < n; i++) {
		ll j = 0;
		ll cnt = 0;
		while (j < n - 1) {
			if (s[j][i] == '.' && s[j + 1][i] == '.' && cnt == 0) {
				ans2++;
				cnt = 1;
			}
			if (s[j][i] == 'X')
				cnt = 0;
			j++;
		}
		/*
		for (ll j = 0; j < n - 1; j++) {
			if (s[j][i] == '.' && s[j + 1][i] == '.')
				ans2++;
			break;
		}
		*/
	}
	cout << ans << '\n' << ans2;
	return 0;
}