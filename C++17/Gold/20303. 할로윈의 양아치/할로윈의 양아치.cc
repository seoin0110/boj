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
#define inf 1000000007
ll dp[30000][3001];
pair<ll,ll> par[30001];
ll find(ll a) {
    if (par[a].first < 0)
        return a;
    return par[a].first = find(par[a].first);
}

bool uni(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    ll tmp = par[x].first + par[y].first;
    if (x == y)
        return false;
    par[y].first = x;
    par[x].first = tmp;
    par[x].second += par[y].second;
    return true;
}

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    ll n, m, k;

    cin >> n >> m >> k; //n: 거리에 있는 아이들의 수, m: 친구 관계 수, k: 울음소리가 공명하기 위한 최소 아이의 수
    for (ll i = 1; i <= n;i++) {
        par[i].first = -1;
        cin >> par[i].second;
    }
    for (ll i = 0; i < m;i++) {
        ll a, b;
        cin >> a >> b;
        uni(a, b);
    }

    vector<pair<ll, ll> >v;
    for (ll i = 1; i <= n;i++) {
        if (par[i].first < 0)
            v.push_back({ -par[i].first,par[i].second });
    }
    dp[0][0] = 0;
    dp[0][v[0].first] = v[0].second;
    for (ll i = 1; i < v.size();i++) {
        for (ll j = 0; j <= 3000;j++) {
            if (j - v[i].first >= 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i].first] + v[i].second);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    ll ma = 0;
    for (ll i = 0; i < v.size();i++) {
        for (ll j = 0;j < k;j++) {
            ma = max(ma, dp[i][j]);
        }
    }

    cout << ma << '\n';

    return 0;
}

