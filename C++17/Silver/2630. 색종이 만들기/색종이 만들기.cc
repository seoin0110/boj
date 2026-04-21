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

ll v[129][129];

ll cnt_b = 0;
ll cnt_w = 0;
ll func(ll a, ll b, ll c, ll d) {
    ll ans_b = 1;
    ll ans_w = 1;
    if (a == b || c == d)
        return 0;
    for (ll i = a; i < b; i++) {
        for (ll j = c; j < d; j++) {
            if (v[i][j])
                ans_w = 0;
            if (!v[i][j])
                ans_b = 0;
        }
    }
    if (ans_w == 1) {
        cnt_w++;
        return 0;
    }
    else if (ans_b == 1) {
        cnt_b++;
        return 0;
    }
    func(a, a + (b - a) / 2, c, c + (d - c) / 2);
    func(a + (b - a) / 2, b, c, c + (d - c) / 2);
    func(a, a + (b - a) / 2, c + (d - c) / 2, d);
    func(a + (b - a) / 2, b, c + (d - c) / 2, d);
    return 0;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    func(0, n, 0, n);
    cout << cnt_w << '\n' << cnt_b;
    return 0;
}