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

ll par[4000001];

ll find(ll a) {
    if (par[a] < 0) {
        return a;
    }
    return find(par[a]);
}

void merge(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    par[x] = y;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    set<ll>s;
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll>v(m);
    for (ll i = 0; i < m; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (ll i = 1; i <= n; i++)
        par[i] = -1;
    for (ll i = 0; i < v[0]; i++)
        par[i] = v[0];
    for (ll i = 1; i < m; i++) {
        for (ll j = v[i-1]+1; j < v[i]; j++) {
            par[j] = v[i];
        }
    }
    for (ll i = 0; i < k; i++) {
        ll a;
        cin >> a;
        cout << find(a+1) << '\n';
        merge(find(a+1), find(a+1) + 1);
    }

    return 0;
}