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
ll chk[501];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll a, b;
    cin >> a >> b;
    vector<ll>v[501];
    for (ll i = 0; i < b; i++) {
        ll c, d;
        cin >> c >> d;
        v[c].push_back(d);
        v[d].push_back(c);
    }
    queue<pair<ll, ll> >q;
    q.push({ 1, 0 });
    chk[1] = 1;
    ll ans = 0;
    while (!q.empty()) {
        pair<ll,ll> tmp = q.front();
        q.pop();
        if (tmp.second == 2)
            break;
        for (auto x : v[tmp.first]) {
            if (chk[x])
                continue;
            q.push({ x, tmp.second + 1 });
            chk[x] = 1;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
