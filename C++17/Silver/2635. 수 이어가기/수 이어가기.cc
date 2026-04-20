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
ll arr[40][40];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    ll ans = 0;
    ll idx = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        ll tmp = n;
        ll tmp2 = i;
        ll cnt = 0;
        while (tmp >= 0) {
            ll tmp3 = tmp - tmp2;
            tmp = tmp2;
            tmp2 = tmp3;
            cnt++;
        }
        if (cnt > ans)
        {
            ans = cnt;
            idx = i;
        }
    }

    cout << ans << '\n';
    while (n >= 0) {
        cout << n << ' ';
        ll tmp3 = n - idx;
        n = idx;
        idx = tmp3;
    }
    

    return 0;
}
