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
ll chk[10000000];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin >> n;
	ll k;
	cin >> k;
	while (k--) {
		ll a,b;
		cin >> a;
		b = a;
		ll flag = 1;
		ll idx = 0;
		while (a) {
			if (chk[a] == 1) {
				flag = 0;
				idx = a;
			}
			a /= 2;
		}
		chk[b] = 1;
		if (flag) {
			cout << "0\n";
		}
		else
			cout << idx << '\n';

	}
	return 0;
}