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
using P = pair<ll, ll>;
using PP = pair<ll, P>;
const ll n_ = 1e5 + 100, inf = 1e18, mod = 1e9 + 7;
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	

	ll n;
	cin >> n;
	for (ll i = 0; i < n;i++) {
		bool ans = true;
		stack<char>st;
		string s;
		cin >> s;
		for (ll j = 0; j < s.length();j++) {
			if (s[j] == '(')
			{
				st.push('(');
			}
			else
			{
				if (st.empty())
					ans = false;
				else
					st.pop();
			}
		}
		if (!st.empty())
			ans = false;
		if (ans == true)
			cout << "YES\n";
		else
			cout << "NO\n";
	}


    return 0;
}