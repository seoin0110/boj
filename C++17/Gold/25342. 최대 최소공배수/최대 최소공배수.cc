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

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll func(ll a, ll b, ll c) {
    ll tmp = gcd(a, b);
    tmp = a * b / tmp;
    return tmp * c / gcd(tmp, c);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 2 == 0) {
            ll ans = func(n, n - 1, n - 3);
            ans = max(ans, func(n - 1, n - 2, n - 3));
            cout << ans << '\n';
        }
        else {
            cout << func(n, n-1, n-2) << '\n';
        }
    }

    return 0;
}

