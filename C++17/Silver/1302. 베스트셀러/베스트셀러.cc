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
using namespace std;
using ll = long long;


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	map<string, ll>mp;
	ll n;
	cin >> n;
	ll m = 0;
	while (n--) {
		string s;
		cin >> s;
		if (mp.find(s) == mp.end())
		{
			mp.insert({ s,1 });
		}
		else
		{
			mp.find(s)->second++;
		}
		m = max(mp.find(s)->second, m);
	}
	map<string, ll>::iterator iter;
	for (iter = mp.begin();iter != mp.end();iter++) {
		if (iter->second == m) {
			cout << iter->first << '\n';
			return 0;
		}

	}


}
