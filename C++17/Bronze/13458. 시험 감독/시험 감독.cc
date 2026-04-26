#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include <random>
#include<functional>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, b, c;
    ll ans = 0;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> b >> c;
    for (ll i = 0; i < n; i++) {
        v[i] -= b;
        if (v[i] < 0)
            v[i] = 0;
    }
    ans += n;
    for (ll i = 0; i < n; i++) {
        if (v[i] > 0) {
            if (v[i] % c == 0) {
                ans += v[i] / c;
            }
            else {
                ans += v[i] / c + 1;
            }
        }
    }

    cout << ans;

    return 0;
}
