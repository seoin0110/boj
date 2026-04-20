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
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 1e9 + 7;
vector<ll>v;
vector<ll>sum;
ll dp[200001];
ll cnt[200001];
ll n, l;

pair<ll, ll> func(ll a) {
    if (dp[a] > 0) {
        return {dp[a], cnt[a]};
    }

    ll idx = upper_bound(sum.begin(), sum.end(), sum[a-1] + l) - sum.begin();
    if (idx == n + 1) {
        dp[a] = sum[n] - sum[a - 1];
        cnt[a] = 1;
        return { dp[a], cnt[a] };
    }
    else {
        pair<ll, ll> p = func(idx);
        dp[a] = p.first;
        cnt[a] = p.second + 1;
        return { dp[a], cnt[a] };
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> n >> l;
    v.resize(n);
    sum.resize(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        sum[i + 1] = sum[i] + v[i];
    }
    dp[n] = v[n - 1];
    cnt[n] = 1;
    for (ll i = 1; i <= n; i++) {
        pair<ll, ll > p = func(i);
        cout << p.second << ' ' << p.first << '\n';
    }
    return 0;
}