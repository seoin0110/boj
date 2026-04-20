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
    vector<ll>v2(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        v2[i] = v[i] * v[i];
        if (i > 0) {
            v[i] += v[i - 1];
            v2[i] += v2[i - 1];
        }

    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans = max(ans, v2[i] * (sum - v[i]));
    }
    cout << ans;
}