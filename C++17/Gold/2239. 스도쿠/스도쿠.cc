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

bool END;
string s[9];
void func(ll x) {
	//cout << x / 9 << ' ' << x % 9 << '\n';
	if (END)return;
	if (x == 81)
	{
		for (ll i = 0; i < 9;i++) {
			cout << s[i] << '\n';
		}
		END = true;
		return;
	}
	if(s[x/9][x%9]!='0')
		func(x + 1);
	else {
		for (ll i = 0;i < 9;i++) {
			char k = i + '1';
			bool c = true;
			for (ll j = 0; j < 9;j++) {
				if (s[x / 9][j] == k || s[j][x % 9] == k || s[(x / 9) / 3 * 3+ j / 3][(x % 9) / 3 *3 + j % 3] ==k)
				{
					c = false;
					break;
				}
			}
			
			if (!c)	continue;
			s[x / 9][x % 9] = k;
			func(x + 1);
			s[x / 9][x % 9] = '0';
		}
	}
}


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	for (ll i = 0; i < 9;i++) {
		cin >> s[i];
	}
	func(0);

	return 0;
}