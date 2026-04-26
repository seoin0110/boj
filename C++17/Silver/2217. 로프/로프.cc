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
    for (ll i = 0; i < n; i++)cin >> v[i];
    sort(v.begin(), v.end());
    ll ans = v[v.size() - 1];
    for (ll i = 0; i < n; i++) {
        ans = max(ans, v[i] * (n - i));
    }
    cout << ans;
    return 0;
}