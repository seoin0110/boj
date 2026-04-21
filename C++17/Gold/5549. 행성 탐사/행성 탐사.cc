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
ll J[1001][1001];
ll O[1001][1001];
ll I[1001][1001];
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll m, n;
	ll k;
	cin >> m >> n;
	cin >> k;
	vector<string>s(m);
	for (ll i = 0; i < m; i++)
		cin >> s[i];
	for (ll i = 1; i <= m; i++) {
		for (ll j = 1; j <= n; j++) {
			J[i][j] = J[i - 1][j] + J[i][j - 1] - J[i - 1][j - 1];
			O[i][j] = O[i - 1][j] + O[i][j - 1] - O[i - 1][j - 1];
			I[i][j] = I[i - 1][j] + I[i][j - 1] - I[i - 1][j - 1];
			if (s[i - 1][j - 1] == 'J')
				J[i][j] += 1;
			else if (s[i - 1][j - 1] == 'O')
				O[i][j] += 1;
			else
				I[i][j] += 1;
		}
	}
	for (ll i = 0; i < k; i++) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << J[c][d] -J[a-1][d] - J[c][b-1] + J[a - 1][b - 1] << ' ';
		cout << O[c][d] - O[a - 1][d] - O[c][b - 1] + O[a - 1][b - 1] << ' ';
		cout << I[c][d] - I[a - 1][d] - I[c][b - 1] + I[a - 1][b - 1] <<'\n';
	}
	return 0;
}