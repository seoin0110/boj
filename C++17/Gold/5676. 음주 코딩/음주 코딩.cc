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
	ll n, m;
	while (cin >> n >> m) {
		//vector<ll>v(4*n);
		vector<ll>pp(6 * n,0);
		vector<ll>mm(6 * n,0);
		vector<ll>zr(6 * n,0);
		string s = "";
		ll base;
		for (base = 1; base < n; base *= 2);
		for (ll i = 0; i < n; i++) {
			ll tmp;
			cin >> tmp;
			if (tmp > 0) {
				pp[base + i]++;
			}
			else if (tmp == 0) {
				zr[base + i]=1;
			}
			else {
				mm[base + i]++;
			}
		}
		for (ll i = base - 1; i > 0; i--) {
			pp[i] = pp[i * 2] + pp[i * 2 + 1];
			mm[i] = mm[i * 2] + mm[i * 2 + 1];
			zr[i] = zr[i * 2] || zr[i * 2 + 1];
		}
		for (ll i = 0; i < m; i++) {
			char a;
			ll b, c;
			cin >> a >> b >> c;
			if (a == 'C') {
				b = base + b - 1;
				if (c > 0) {
					pp[b] = 1;
					mm[b] = 0;
					zr[b] = 0;
				}
				else if (c == 0) {
					pp[b] = 0;
					mm[b] = 0;
					zr[b] = 1;
				}
				else {
					pp[b] = 0;
					mm[b] = 1;
					zr[b] = 0;
				}
				b /= 2;
				while (b >= 1) {
					pp[b] = pp[2 * b] + pp[2 * b + 1];
					mm[b] = mm[2 * b] + mm[2 * b + 1];
					zr[b] = zr[2 * b] || zr[2 * b + 1];
					b /= 2;
				}
			}
			else {
				b = base + b - 1;
				c = base + c - 1;
				ll cnt = 0;
				ll z = 0;
				ll ans = 0;
				while (b <= c) {
					if (b % 2) {
						if (zr[b]) {
							s += "0";
							z = 1;
							break;
						}
						else {
							cnt += mm[b];
						}
						b++;
					}
					if (!(c % 2)) {
						if (zr[c]) {
							s += "0";
							z = 1;
							break;
						}
						else {
							cnt += mm[c];
						}
						c--;
					}
					c /= 2;
					b /= 2;
				}
				if (!z) {
					if (cnt % 2) {
						s += "-";
					}
					else {
						s += "+";
					}
				}

			}
		}
		cout << s << '\n';

	}
	
	return 0;
}

