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
string n;
map<string, ll> m;

ll func(string a) {
	if (m.find(a) != m.end()) {
		return m[a];
	}
	if (a.length() == 1) {
		return m[a] = 1;
	}
	if (a.substr(1, a.length() - 1).compare(a.substr(0, a.length() - 1)) == 0) {
		return m[a] = func(a.substr(1, a.length() - 1));
	}
	return m[a] = func(a.substr(1, a.length() - 1)) + func(a.substr(0, a.length() - 1));
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	cout << func(n);
	return 0;
}