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

	string s;
	while (true) {
		cin >> s;
		if (s == "#") {
			break;
		}
		string tmp = s;
		ll ans = 1;
		while (true) {
			cin >> s;
			if (s == "#")
				break;
			ll diff = 0;
			if (s.length() != tmp.length()) {
				ans = 0;
				tmp = s;
				continue;
			}
			for (ll i = 0; i < s.length(); i++) {
				if (s[i] != tmp[i])diff++;
			}
			if (diff != 1)
				ans = 0;
			tmp = s;
		}
		if (ans == 1) {
			cout << "Correct\n";
		}
		else {
			cout << "Incorrect\n";
		}
	}
	return 0;
}