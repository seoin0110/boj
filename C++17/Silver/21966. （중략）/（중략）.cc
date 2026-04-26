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

set<string>s;
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	string s;
	cin >> s;
	if (s.length() <= 25)
	{
		cout << s;
		return 0;
	}
	ll check = 0;
	for (ll i = 11; i < s.length() - 12; i++) {
		if (s[i] == '.')
			check = 1;
	}
	if (check == 0) {
		for (ll i = 0; i < 11; i++)
			cout << s[i];
		cout << "...";
		for (ll i = s.length() - 11; i < s.length(); i++)
			cout << s[i];
	}
	else {
		for (ll i = 0; i < 9; i++)
			cout << s[i];
		cout << "......";
		for (ll i = s.length() - 10; i < s.length(); i++)
			cout << s[i];
	}
	return 0;
}