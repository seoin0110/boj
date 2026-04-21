#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll a, b, c;
	cin >> a >> b >> c;
	vector<string>v(b);
	vector<char>s(a,'?');
	for (ll i = 0; i < b; i++) {
		cin >> v[i];
	}
	for (ll i = 0; i < b; i++) {
		for (ll j = 0; j < a*c; j++) {
			if (v[i][j] != '?') {
				s[j / c] = v[i][j];
			}
		}
	}
	for (ll i = 0; i < a; i++)
		cout << s[i];
	return 0;
}

