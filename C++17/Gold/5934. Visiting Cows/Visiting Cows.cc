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


ll dp[50001][2];
vector<ll>v[50001];

void dfs(ll a, ll par) {
    dp[a][1] = 1;
    for (ll i = 0; i < v[a].size(); i++) {
        if (par == v[a][i])continue;
        dfs(v[a][i], a);
        dp[a][0] += max(dp[v[a][i]][0],dp[v[a][i]][1]);
        dp[a][1] += dp[v[a][i]][0];
    }
    return;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n,r,q;
    cin >> n;
    for (ll i = 0; i < n - 1; i++) {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,1);

    cout << max(dp[1][0], dp[1][1]);

    return 0;
}