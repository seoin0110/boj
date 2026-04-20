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

ll trash[101][101];
ll chk[101][101];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    for (ll i = 0; i < k; i++) {
        ll a, b;
        cin >> a >> b;
        trash[a][b] = 1;
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            if (chk[i][j] == 1 || trash[i][j] == 0) {
                continue;
            }
            queue<pair<ll, ll> > q;
            ll cnt = 1;
            q.push({ i,j });
            chk[i][j] = 1;
            while (!q.empty()) {
                pair<ll, ll> p = q.front();
                q.pop();
                if (p.first + 1 <= n && chk[p.first + 1][p.second] == 0 && trash[p.first + 1][p.second] == 1) {
                    chk[p.first + 1][p.second] = 1;
                    q.push({ p.first + 1, p.second });
                    cnt++;
                }
                if (p.second + 1 <= m && chk[p.first][p.second + 1] == 0 && trash[p.first][p.second + 1] == 1) {
                    chk[p.first][p.second + 1] = 1;
                    q.push({ p.first, p.second + 1 });
                    cnt++;
                }
                if (p.first - 1 >= 1 && chk[p.first - 1][p.second] == 0 && trash[p.first - 1][p.second] == 1) {
                    chk[p.first - 1][p.second] = 1;
                    q.push({ p.first - 1, p.second });
                    cnt++;
                }
                if (p.second - 1 >= 1 && chk[p.first][p.second - 1] == 0 && trash[p.first][p.second - 1] == 1) {
                    chk[p.first][p.second - 1] = 1;
                    q.push({ p.first, p.second - 1 });
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans;
    return 0;
}
