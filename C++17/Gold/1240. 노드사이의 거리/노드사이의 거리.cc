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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll> > v[1001];
    for (ll i = 0; i < n - 1; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({ b, c });
        v[b].push_back({ a, c });
    }
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        vector<ll>chk(n + 1, 0);
        chk[a] = 1;
        queue<pair<ll,ll> >q;
        for (auto x : v[a]) {
            q.push(x);
        }
        while (!q.empty()) {
            pair<ll, ll> p = q.front();
            q.pop();
            chk[p.first] = 1;

            if (p.first == b) {
                cout << p.second << '\n';
                break;
            }
            for (auto x : v[p.first]) {
                if (chk[x.first] != 1)
                    q.push({ x.first, p.second + x.second });
            }
        }
    }

    return 0;
}
