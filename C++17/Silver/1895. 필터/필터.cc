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
    ll r, c;
    cin >> r >> c;
    for (ll i = 0; i < r; i++) {
        for (ll j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    ll a;
    cin >> a;
    vector<ll>v(9);
    ll ans = 0;
    for (ll i = 0; i < r - 2; i++) {
        for (ll j = 0; j < c - 2; j++) {
            for (ll k = 0; k < 9; k++) {
                v[k] = arr[i + k % 3][j+k/3];
            }
            sort(v.begin(), v.end());
            if (v[4] >= a)
                ans++;
        }
    }
    cout << ans;

    return 0;
}
