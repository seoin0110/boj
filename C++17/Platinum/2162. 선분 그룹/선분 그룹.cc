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
ll par[3000];

ll ccw(pair<ll, ll>p1, pair<ll, ll>p2, pair<ll, ll>p3) {
    ll s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= (p1.second * p2.first + p2.second * p3.first + p3.second * p1.first);

    if (s > 0) return 1;
    else if (s == 0) return 0;
    else return -1;
}

bool isIntersect(pair<pair<ll, ll>, pair<ll, ll> >l1, pair<pair<ll, ll>, pair<ll, ll> >l2) {
    pair<ll, ll> p1 = l1.first;
    pair<ll, ll> p2 = l1.second;
    pair<ll, ll> p3 = l2.first;
    pair<ll, ll> p4 = l2.second;

    ll p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    ll p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);

    if (p1p2 == 0 && p3p4 == 0) {
        if (p1 > p2) swap(p2, p1);
        if (p3 > p4) swap(p3, p4);

        return p3 <= p2 && p1 <= p4;
    }

    return p1p2 <= 0 && p3p4 <= 0;
}

ll find(ll a) {
    if (par[a] < 0) {
        return a;
    }
    return par[a] = find(par[a]);
}

bool merge(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    if (x != y) {
        par[x] = par[x] + par[y];
        par[y] = x;
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    vector< pair<pair<ll, ll>, pair<ll, ll> > > v(n);
    for (ll i = 0; i < n; i++) {
        par[i] = -1;
        pair<pair<ll, ll>, pair<ll, ll> > tmp;
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        tmp = { {a,b}, {c,d} };
        v[i] = tmp;
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            if (isIntersect(v[i], v[j])) {
                merge(i, j);
            }
        }
    }
    ll ans = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        if (par[i] < 0) {
            sum++;
            ans = max(ans, -par[i]);
        }
    }
    cout << sum << '\n' << ans;

    return 0;
}