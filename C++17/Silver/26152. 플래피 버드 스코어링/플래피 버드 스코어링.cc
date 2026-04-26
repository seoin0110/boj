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
    vector<ll>v1(n);
    vector<ll>v2(n);
    vector<ll>v3(n);
    for (ll i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (ll i = 0; i < n; i++)
        cin >> v2[i];
    v3[0] = v1[0] - v2[0];
    for (ll i = 1; i < n; i++) {
        v3[i] = min(v3[i - 1], v1[i] - v2[i]);
    }
    ll m;

    cin >> m;
    for (ll i = 0; i < m; i++) {
        ll tmp;
        cin >> tmp;
        cout << upper_bound(v3.begin(), v3.end(), tmp,greater<ll>()) - v3.begin() << '\n';
    }

    return 0;
}