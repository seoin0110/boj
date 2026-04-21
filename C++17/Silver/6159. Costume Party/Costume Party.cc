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
    ll n, s;
    cin >> n >> s;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll l = 0;
    ll r = n - 1;
    ll ans = 0;
    while(l < r && l < n && r >= 0) {
        while (v[l] + v[r] > s) {
            r--;
        }
        if (l < r) {
            ans += r - l;
        }
        l++;
    }
    cout << ans;
}