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
ll con[101][101];
ll chk[101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    ll a, b;
    cin >> a >> b;
    ll m;
    cin >> m;

    for (ll i = 0; i < m; i++) {
        ll z, x;
        cin >> z >> x;
        con[z][x] = 1;
        con[x][z] = 1;
    }
    queue<pair<ll, ll> >q;
    q.push({ a,0 });
    ll ans = -1;
    chk[a] = 1;
    while (!q.empty()) {
        pair<ll,ll> tmp = q.front();
        if (tmp.first == b) {
            ans = tmp.second;
            break;
        }
        q.pop();
        for (ll i = 1; i <= 100; i++) {
            if (con[tmp.first][i] == 1 && chk[i] == 0) {
                chk[i] = 1;
                q.push({ i,tmp.second + 1 });
            }
        }
    }

    cout << ans;
    return 0;
}
