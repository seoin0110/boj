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
    ll t;
    cin >> t;
    vector<ll>v(t);
    for (ll i = 0; i < t; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll length = 1;
    ll l = 0;
    ll r = 0;
    while (r < t) {
        if (v[r] < v[l] + 5) {
            length = max(length, r - l + 1);
            r++;
        }
        else
            l++;
    }
    cout << max(5 - length, (ll)0);
    return 0;
}