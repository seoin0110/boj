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
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>v(n+1, 0);
    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        cout << v[b+1] - v[a] << '\n';
    }

    return 0;
}