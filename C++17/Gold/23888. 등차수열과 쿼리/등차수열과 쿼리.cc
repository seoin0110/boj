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
    if (b == 0)return a;
    return gcd(b, a % b);
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll a, d;
    cin >> a >> d;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll q, l, r;
        cin >> q >> l >> r;
        if (q == 1) {
            cout << (2 * (a + (l-1) * d) + (r - l) * d) * (r - l + 1) / 2 << '\n';
        }
        else {
            if (r == l) {
                cout << a + (l-1) * d<<'\n';
            }
            else {
                cout << gcd(d, a + (l - 1) * d)<<'\n';
            }
        }
    }
    return 0;
}