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
#include <set>
#include <cstring>
#define ll long long
using namespace std;

ll inf = 1000000007;

ll check[100][100];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n, m;
	cin >> n >> m;
	string s[100];
	for (ll i = 0; i < n; i++)
		cin >> s[i];
	queue<pair<ll, pair<ll, ll> > > q;
	q.push({ 1,{0,0} });
	while (!q.empty()) {
		pair<ll, pair<ll, ll> > p = q.front();
		q.pop();
		if (p.second.first == n - 1 && p.second.second == m - 1) {
			cout << p.first;
			break;
		}
		//cout << p.second.first << ' ' << p.second.second << '\n';
		if (p.second.first > 0 && check[p.second.first - 1][p.second.second]==false && s[p.second.first - 1][p.second.second] == '1') {
			q.push({ p.first + 1, {p.second.first - 1,p.second.second} });
			check[p.second.first - 1][p.second.second] = true;
		}
		if (p.second.second > 0  && check[p.second.first][p.second.second - 1] == false && s[p.second.first][p.second.second - 1] == '1') {
			q.push({ p.first + 1, {p.second.first,p.second.second - 1} });
			check[p.second.first][p.second.second - 1] = true;
		}
		if (p.second.first < n-1 && check[p.second.first + 1][p.second.second] == false && s[p.second.first + 1][p.second.second] == '1') {
			q.push({ p.first + 1, {p.second.first + 1,p.second.second} });
			check[p.second.first + 1][p.second.second] = true;
		}
		if (p.second.second < m-1 && check[p.second.first][p.second.second + 1] == false && s[p.second.first][p.second.second + 1] == '1') {
			q.push({ p.first + 1, {p.second.first,p.second.second + 1} });
			check[p.second.first][p.second.second + 1] = true;
		}
	}
	return 0;
}