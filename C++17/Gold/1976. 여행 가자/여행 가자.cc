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
/*
ll func(ll n, ll k) {
    if (n - k < k)
        k = n - k;
    ll i = 0;
    ll ans = 1;
    while (i < k) {
        ans = (ans * n)%inf;
        n--;
        i++;
    }
    i = 0;
    while (k) {
        ans = (ans /k) % inf;
        k--;
    }

    return ans;
}

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    

    ll n, m;
    cin >> n;
    cin >> m;
    ll k = 0;
    ll ans = 0;
    for (ll i = 0;i <= n;i += m) {
        k = (i / m);

        ans += func(n - i + k, k) % inf;

    }

    cout << ans % inf<< '\n';
    return 0;
}*/


ll v[201][201];

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);


    ll n, m;

    cin >> n >> m;
    for (ll i = 1; i <= n;i++) {
        for (ll j = 1;j <= n;j++) {
            cin >> v[i][j];
            if (i == j)
                v[i][j] = 1;
        }
    }

    for (ll k = 1; k <= n;k++) {
        for (ll j = 1; j <= n;j++) {
            for (ll i = 1; i <= n;i++) {
                v[i][j] = v[i][j] || (v[i][k] && v[k][j]);
            }
        }
    }
    vector<ll>kk(m);
    for (ll i = 0; i < m;i++) {
        cin >> kk[i];
    }
    ll check = 1;
    for (ll i = 0; i < m - 1;i++) {
        if (!v[kk[i]][kk[i + 1]])
            check = 0;
    }
    if (check == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}