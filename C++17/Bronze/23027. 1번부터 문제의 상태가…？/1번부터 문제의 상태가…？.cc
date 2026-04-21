#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

//ll arr[1000000];
//ll tree[4000000];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/*
	ll n;
	cin >> n;
	while (n--) {
		ll m,ans = 0;
		cin >> m;
		vector<pair<ll, ll> >v(m);
		vector<ll>tree(400000,0);
		ll base;
		for (base = 1; base < m; base *= 2);
		for (ll i = 0; i < m; i++) {
			cin >> v[i].first >> v[i].second;
			v[i].second = -v[i].second;
		}
		sort(v.begin(), v.end());  //x좌표는 오름차순, y좌표는 내림차순 정렬
		for (ll i = 0; i < m; i++) {
			for (ll j = 0; j < i; j++) {

			}
		}


		*/

	string s;
	ll a = 0;
	ll b = 0;
	ll c = 0;

	cin >> s;
	for(ll i = 0; i < s.length();i++){
		if (s[i] == 'A') {
			a++;

		}
		else if (s[i] == 'B') {
			b++;
		}
		else if (s[i] == 'C') {
			c++;
		}


	}
	if (a > 0) {
		for (ll i = 0; i < s.length(); i++) {
			if (s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'F')
				cout << "A";
			else
				cout << s[i];
		}
	}
	else if (b > 0) {
		for (ll i = 0; i < s.length(); i++) {
			if (s[i] == 'C' || s[i] == 'D' || s[i] == 'F')
				cout << "B";
			else
				cout << s[i];
		}
	}
	else if (c > 0) {
		for (ll i = 0; i < s.length(); i++) {
			if (s[i] == 'D' || s[i] == 'F')
				cout << "C";
			else
				cout << s[i];
		}
	}
	else {
		for (ll i = 0; i < s.length(); i++)
			cout << "A";
	}

	
	return 0;
}

