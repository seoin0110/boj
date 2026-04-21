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



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    vector<ll>a(n);
    vector<ll>b(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(a.begin(), a.end());
    ll tmp;
    ll ans = -1000000000000000;
    for (ll i = 0; i < n; i++) {
        tmp = 1000000000000000;
        for (ll j = 0; j < n; j++) {
            tmp = min(tmp, abs(a[i] - b[j]));
        }
        ans = max(ans, tmp);
    }

    cout << ans;
    return 0;
}