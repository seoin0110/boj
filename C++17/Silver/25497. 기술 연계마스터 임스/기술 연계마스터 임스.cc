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
	stack<char>st1;
	stack<char>st2;
	ll ans = 0;
	for (ll i = 0; i < s.length(); i++) {
		if (s[i] >= '1' && s[i] <= '9')
			ans++;
		else if (s[i] == 'L' || s[i] == 'S') {
			if (s[i] == 'L')
				st1.push(s[i]);
			else
				st2.push(s[i]);
		}
		else {
			if (s[i] == 'R') {
				if (st1.empty())
					break;
				else {
					st1.pop();
					ans++;
				}
			}
			else {
				if (st2.empty())
					break;
				else {
					st2.pop();
					ans++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
