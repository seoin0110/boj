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
ll par[100001];
//ll checked[100001];
ll find(ll a) {
    if (par[a] < 0)
        return a;
    else
        return par[a] = find(par[a]);
}

bool merge(ll a, ll b) {
    ll x = find(a);
    ll y = find(b);
    if (x == y)
        return false;
    else
    {
        par[x] = y;
        return true;
    }
}
vector<pair<ll, ll> >v[100001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);



    ll n, m;
    cin >> n >> m;
    if ((n == 1 && m == 0)) {
        cout << "-1";
        return 0;

    }
    vector<ll>checked(n + 1, 0);
    for (ll i = 1; i <= n; i++)
        par[i] = -1;
    for (ll i = 0; i < m; i++) {
        ll a1, a2;
        cin >> a1 >> a2;
        v[a1].push_back({ a2,i + 1 });
        v[a2].push_back({ a1,i + 1 });
        merge(a1, a2);
    }
    if (n - 2 > m)
    {
        cout << "-1";
        return 0;
    }
    ll c = 0;
    vector<ll>c1;
    for (ll j = 1; j <= n; j++) {
        if (par[j] < 0) {
            c1.push_back(j);
            c++;
        }
    }
    if (n == 2)
    {
        cout << "-1";
        return 0;
    }
    vector<ll>a1;
    vector<ll>b1;
    if (c > 2)
    {
        cout << "-1";
        return 0;
    }
    else if (c == 2) {
        for (ll i = 1; i <= n; i++) {
            if (find(i) == c1[0])
                a1.push_back(i);
            else
                b1.push_back(i);
        }
        if (a1.size() == b1.size())
        {
            cout << "-1";
            return 0;
        }
        cout << a1.size() << ' ' << b1.size() << '\n';
        for (ll i = 0; i < a1.size(); i++)
            cout << a1[i] << ' ';
        cout << '\n';

        ll k = 1;
        checked[c1[0]] = 1;
        queue<ll>q;
        q.push(c1[0]);
        while (k < a1.size()) {
            ll t = q.front();
            q.pop();
            for (ll i = 0; i < v[t].size(); i++) {
                if (checked[v[t][i].first] != 1) {
                    q.push(v[t][i].first);
                    cout << v[t][i].second << ' ';
                    k++;
                    checked[v[t][i].first] = 1;
                }
            }
        }
        cout << '\n';
        for (ll i = 0; i < b1.size(); i++)
            cout << b1[i] << ' ';
        cout << '\n';
        while (!q.empty())
            q.pop();
        k = 1;
        checked[c1[1]] = 1;
        q.push(c1[1]);
        while (k < b1.size()) {
            ll t = q.front();
            q.pop();
            for (ll i = 0; i < v[t].size(); i++) {
                if (checked[v[t][i].first] != 1) {
                    q.push(v[t][i].first);
                    cout << v[t][i].second << ' ';
                    k++;
                    checked[v[t][i].first] = 1;
                }
            }
        }
        cout << '\n';
    }
    else if (c == 1) {
        cout << n - 1 << ' ' << 1 << '\n';
        queue<ll>q;
        vector<ll>vv;
        q.push(c1[0]);
        ll k = 1;
        ll kkk = 0;
        checked[c1[0]] = 1;
        while (k < n) {
            ll t = q.front();
            q.pop();
            for (ll i = 0; i < v[t].size(); i++) {
                if (checked[v[t][i].first] != 1) {
                    q.push(v[t][i].first);
                    vv.push_back(v[t][i].second);
                    k++;
                    kkk = v[t][i].first;
                    checked[v[t][i].first] = 1;
                }
            }
        }
        for (ll i = 1; i <= n; i++) {
            if (i != kkk)
                cout << i << ' ';
        }
        cout << '\n';
        for (ll i = 0; i < vv.size() - 1; i++) {
            cout << vv[i] << ' ';
        }
        cout << "\n";
        cout << kkk << '\n';
    }
    else {
        cout << "-1";
    }

    return 0;
}
