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
ll arr[101][101];
ll chk[101];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    for (ll i = 0; i < k; i++) {
        ll a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    queue<ll>q;
    q.push(1);
    ll ans = 0;
    chk[1] = 1;
    while (!q.empty()) {
        ll tmp = q.front();
        q.pop();
        for (ll i = 1; i <= n; i++) {
            if (chk[i] == 0 && arr[tmp][i] == 1) {
                ans += 1;
                q.push(i);
                chk[i] = 1;
            }
        }
    }

    cout << ans;
    return 0;
}