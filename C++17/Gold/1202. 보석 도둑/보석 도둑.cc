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

    ll n, k;
    ll ans = 0;
    cin >> n >> k;
    vector<pair<ll, ll> >v;
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back({ a, b });
    }
    vector<ll>q;
    for (ll i = 0; i < k; i++) {
        ll a;
        cin >> a;
        q.push_back(a);
    }
    sort(v.begin(), v.end());
    sort(q.begin(), q.end());
    priority_queue<ll>pq;
    ll v_idx = 0;
    for (auto x : q) {
        while (v_idx < n && v[v_idx].first <= x) {
            pq.push(v[v_idx].second);
            v_idx++;
        }
        if (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }
    cout << ans;
    return 0;
}