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
    
    ll n, m;
    cin >> n >> m;
    vector<ll>v(n+m,0);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n + m; j++) {
            ll tmp;
            cin >> tmp;
            v[i] -= tmp;
            v[j] += tmp;
        }
    }
    for (ll i = 0; i < n + m; i++)
        cout << v[i] << ' ';

    return 0;
}