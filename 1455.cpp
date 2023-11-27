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
ll chk[101][101];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<string>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll ans = 0;
    for (ll i = n - 1; i >= 0; i--) {
        for (ll j = m - 1; j >= 0; j--) {

            if ((chk[i + 1][j] + chk[i][j + 1] - chk[i + 1][j + 1]) % 2 == 1 && v[i][j] == '0') {
                ans++;
                chk[i][j] = chk[i + 1][j] + chk[i][j + 1] - chk[i + 1][j + 1] + 1;
            }
            else if ((chk[i + 1][j] + chk[i][j + 1] - chk[i + 1][j + 1]) % 2 == 0 && v[i][j] == '1') {
                ans++;
                chk[i][j] = chk[i + 1][j] + chk[i][j + 1] - chk[i + 1][j + 1] + 1;
            }
            else {
                chk[i][j] = chk[i + 1][j] + chk[i][j + 1] - chk[i + 1][j + 1];
            }
        }
    }
    cout << ans;
    return 0;
}
