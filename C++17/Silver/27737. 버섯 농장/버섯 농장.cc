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
using ll = long long;
using namespace std;
ll v[100][100];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++)
            cin >> v[i][j];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if (v[i][j] == 1) {
                continue;
            }
            queue<pair<ll, ll> >q;
            q.push({ i,j });
            v[i][j] = 1;
            ll cnt = 1;
            while (!q.empty()) {
                pair<ll, ll> p = q.front();
                q.pop();
                if (p.first < n - 1 && v[p.first + 1][p.second] == 0) {
                    q.push({ p.first + 1, p.second });
                    v[p.first + 1][p.second] = 1;
                    cnt++;
                }
                if (p.first > 0 && v[p.first - 1][p.second] == 0) {
                    q.push({ p.first - 1, p.second });
                    v[p.first - 1][p.second] = 1;
                    cnt++;
                }
                if (p.second < n - 1 && v[p.first][p.second + 1] == 0) {
                    q.push({ p.first, p.second + 1});
                    v[p.first ][p.second + 1] = 1;
                    cnt++;
                }
                if (p.second > 0 && v[p.first][p.second - 1] == 0) {
                    q.push({ p.first, p.second - 1 });
                    v[p.first][p.second - 1] = 1;
                    cnt++;
                }
            }
            if (cnt % k) {
                ans += cnt / k + 1;
            }
            else
                ans += cnt / k;
        }
    }
    if (ans > m || ans == 0) {
        cout << "IMPOSSIBLE";
    }
    else
        cout << "POSSIBLE" << '\n' << m - ans;
    return 0;
}