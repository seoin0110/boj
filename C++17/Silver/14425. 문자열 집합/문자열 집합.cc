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
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n, m;
	cin >> n >> m;
	set<string>st;
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		string s;
		cin >> s;
		st.insert(s);
	}
	for (ll i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (st.find(s) != st.end()) ans++;
	}
	cout << ans;
	return 0;
}