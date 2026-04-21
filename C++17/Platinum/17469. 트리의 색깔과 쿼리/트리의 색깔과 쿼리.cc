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
set<ll> s[100000];
ll par[100000];
ll connect[100000];//connect[i] : i 정점의 부모 정점
ll color[100000];
ll find(ll a) {
    if (par[a] < 0) {
        return a;
    }
    else
        return par[a] = find(par[a]);
}

void merge(ll a, ll b) {
    a = find(a);
    b = find(b);
    if (par[a] < par[b]) {
        s[a].insert(s[b].begin(), s[b].end());
        par[a] = -(ll)s[a].size();
        par[b] = a;
    }
    else {
        s[b].insert(s[a].begin(), s[a].end());
        par[b] = -(ll)s[b].size();
        par[a] = b;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, q;
    cin >> n >> q;
    connect[0] = -1;
    par[0] = -1;
    for (ll i = 1; i < n; i++) {
        cin >> connect[i];
        connect[i] -= 1;
        par[i] = -1;
    }
    for (ll i = 0; i < n; i++) {
        cin >> color[i];
        s[i].insert(color[i]);
    }
    vector<pair<ll, ll> >query(n + q - 1);
    for (ll i = 0; i < n + q - 1; i++) {
        ll a, b;
        cin >> a >> b;
        query[i] = { a,b-1 };
    }
    stack<ll>ans;
    for (ll i = n + q - 2; i >= 0; i--) {
        if (query[i].first == 1) {
            merge(query[i].second, connect[query[i].second]);
        }
        else {
            ans.push(-par[find(query[i].second)]);
        }
    }
    while (!ans.empty()) {
        cout << ans.top() << '\n';
        ans.pop();
    }

    return 0;
}
