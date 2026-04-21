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

ll n, q;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    cin >> n >> q;
    vector<ll>v(n + 1);
    vector<ll>sub(n + 1);
    v[0] = 0;
    sub[0] = 0;
    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
        sub[i] += sub[i-1] + abs(v[i] - v[i - 1]);
    }
    for (ll i = 0; i < q; i++) {
        ll a, b;
        cin >> a >> b;
        cout << sub[b] - sub[a ]<<'\n';
    }
    return 0;
}