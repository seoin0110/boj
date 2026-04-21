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
	set<string>s;
	ll n;
	cin >> n;
	char a;
	cin >> a;
	for (ll i = 0; i < n; i++) {
		string ss;
		cin >> ss;
		s.insert(ss);
	}
	ll k = 2;
	if (a == 'F')
		k = 3;
	else if (a == 'O')
		k = 4;
	cout << s.size() / (k - 1);
	return 0;
}