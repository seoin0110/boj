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
ll h[26];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	for (ll i = 0; i < s.length(); i++)
		h[s[i] - 'a']++;
	for (ll i = 0; i < 26; i++) cout << h[i] << " ";
	return 0;
}