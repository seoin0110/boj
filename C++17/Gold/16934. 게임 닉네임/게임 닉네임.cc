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

	ll n;
	set<string>s;
	map<string, ll>mp;
	cin >> n;
	vector<string>v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		ll flag = 0;
		if(s.find(v[i]) != s.end()){
			mp[v[i]]++;
			if(mp[v[i]] == 1) cout << v[i] << "\n";
			else cout << v[i] << mp[v[i]] << "\n";
			continue;
		}
		for (ll j = 1; j <= v[i].length(); j++) {
			string tmp = v[i].substr(0, j);
			if (flag == 0 && s.find(tmp) == s.end()) {
				cout << tmp << "\n";
				flag = 1;
			}
			s.insert(tmp);
		}
		if (flag == 0) {
			mp[v[i]]++;
			if (mp[v[i]] == 1) cout << v[i] << "\n";
			else cout << v[i] << mp[v[i]] << "\n";
		}
		mp[v[i]]++;
	}
	return 0;
}