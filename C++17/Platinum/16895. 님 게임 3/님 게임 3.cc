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
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (ll i = 0; i < n; i++) {
        ll tmp = 0;
        for (ll j = 0; j < n; j++) {
            if (i != j) {
                tmp ^= v[j];
            }
        }
        for (ll j = 1; j <= v[i]; j++) {
            if ((tmp ^ (v[i] - j)) == 0) {
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}