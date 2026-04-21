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
#define ll long long
using namespace std;
ll ans;
using P = pair<ll, ll>;
using PP = pair<ll, P>;
const ll inf = 1e18, mod = 998244353;
ll A[1100][1100], checked[1100][1100], dy[4] = { -1,0,1,0 }, dx[4] = { 0,1,0,-1 };
ll a,b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)cin >> A[i][j];
    ll l = 0, r = 1e9;
    ans = inf;
    while (l <= r) {
        ll mid = (l + r) / 2;
        queue<P>q;
        for (int i = 0; i < 1100; i++)
            for (int j = 0; j < 1100; j++)checked[i][j] = false;
        checked[1][1] = true;
        q.push({ 1,1 });
        while (q.size()) {
            a = q.front().first, b = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                if (dy[i] + a <= 0 || dy[i] + a > n || dx[i] + b <= 0 || dx[i] + b > n || checked[dy[i] + a][dx[i] + b] || abs(A[dy[i] + a][dx[i] + b] - A[a][b]) > mid)continue;
                checked[dy[i] + a][dx[i] + b] = true;
                q.push({ dy[i] + a,dx[i] + b });
            }
        }
        if (checked[n][n]) {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;


    return 0;
}