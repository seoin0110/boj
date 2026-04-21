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

ll inf = 1000000007;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    if (n == 1) {
        cout << v[0];
        return 0;
    }
    else if (n == 2) {
        cout << max(v[0], v[1]);
        return 0;
    }
    ll m = v[0];
    for (ll i = 0; i < n - 2; i++) {
        m = max(m, min(v[i], v[i + 2]) + v[i + 1]);
    }
    m = max(m, v[n - 1]);
    cout << m;
    return 0;
}