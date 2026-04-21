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
	string s;
	cin >> s;

	ll sum = 0;
	ll check = 0;
	ll tmp = 0;
	for (ll i = 0; i < s.length(); i++) {
		if (s[i]=='+'|| s[i]=='-') {
			if (check == 0) {
				sum += tmp;
			}
			else {
				sum -= tmp;
			}
			tmp = 0;
			if (s[i] == '-')
				check = 1;
		}
		else {
			tmp = tmp * 10 + (ll)(s[i] - '0');
		}
	}
	if (check == 0) {
		sum += tmp;
	}
	else {
		sum -= tmp;
	}
	cout << sum;
	return 0;
}