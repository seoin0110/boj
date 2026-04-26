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
	ll n,a;
	ll count = 0;
	map<string, ll>mp;
	vector<string>v;

	cin >> n;
	for (ll i = 0; i < n; i++) {
		string s;
		cin >> s;
		mp.insert({ s,i });
	}
	for (ll i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	for (ll i = 0; i < n; i++) {
		bool a = true;
		for (int j = i + 1; j < n; j++)
			if (mp.find(v[i])->second > mp.find(v[j])->second)
				a = false;
		if (a == false)
			count = count + 1;
	}
	cout << count;

	
}
