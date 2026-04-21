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
using ll = long long;
using namespace std;

ll seg[4000000];

bool sorting(pair <ll, ll> p, pair <ll, ll> p2) { // compare 함수
    if (p.first == p2.first) {
        return p.second > p2.second; // index는 내림차순으로
    }

    return p.first < p2.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, q;
    cin >> n;
    ll base = 1;
    for (base = 1; base < n; base *= 2);
    vector<pair<ll, ll> > v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), sorting);
    ll sol = 0;
    for (ll i = 0; i < n; i++) {
        ll b = base;
        ll c = base + v[i].second - 1;
        ll ans = 0;
        while (b <= c) {
            if (b % 2 == 1) {
                ans = max(ans, seg[b]);
                b++;
            }
            if (c % 2 == 0) {
                ans = max(ans, seg[c]);
                c--;
            }
            b /= 2;
            c /= 2;
        }
        seg[base + v[i].second] = ans + 1;
        sol = max(sol, ans + 1);
        c = (base + v[i].second) / 2;
        while (c > 0) {
            seg[c] = max(seg[c * 2], seg[c * 2 + 1]);
            c /= 2;
        }
    }
    cout << sol;
    return 0;
}