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
ll arr[200001];
ll par[200001];
ll query[400001][3];
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

ll can_merge(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    if (x != y) {
        return 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, q;
    cin >> n >> q;
    par[1] = -1;
    for (ll i = 2; i <= n; i++) {
        cin >> arr[i];
        par[i] = -1;
    }
    for (ll i = 0; i < q + n - 1; i++) {
        ll a;
        ll b, c;
        cin >> a;
        query[i][0] = a;
        if (a == 0) {
            cin >> b;
            query[i][1] = b;
        }
        else {
            cin >> b >> c;
            query[i][1] = b;
            query[i][2] = c;
        }
    }
    vector<ll>v;
    for (ll i = q + n - 2; i >= 0; i--) {
        if (query[i][0] == 0) {
            merge(query[i][1], arr[query[i][1]]);
        }
        else {
            v.push_back(can_merge(query[i][1], query[i][2]));
        }
    }
    for (ll i = v.size() - 1; i >= 0; i--) {
        if (v[i] == 0) {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}