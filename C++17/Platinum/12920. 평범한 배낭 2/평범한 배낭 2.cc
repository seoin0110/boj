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

ll dp[3001][10001];
vector<pair<ll, ll> >v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n, m;
    cin >> n >> m;
    v.push_back({ 0,0 });
    while (n--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll tmp = 1, sum = 0;
        while (tmp + sum <= c) {
            v.push_back({ a * tmp,b * tmp });
            sum += tmp;
            tmp *= 2;
        }
        tmp /= 2;
        if (c - sum>0) {
            v.push_back({ a * (c - sum),b * (c - sum) });
        }

    }
    for (ll i = 1; i < v.size(); i++) {
        for (ll j = 0; j <= m; j++) {
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            if (j >= v[i].first)
            {
                dp[i][j] = max(dp[i - 1][j - v[i].first] + v[i].second, dp[i][j]);
            }
        }
        
    }
    ll a = 0;

    for (ll i = 0; i <= m; i++)
        a = max(a, dp[v.size() - 1][i]);
    cout << a;
    return 0;
}