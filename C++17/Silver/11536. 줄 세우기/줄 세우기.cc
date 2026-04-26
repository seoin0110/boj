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

ll dp[10000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    vector<string>s(n);
    vector<string>v1(n);
    vector<string>v2(n);
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
        v1[i] = s[i];
        v2[i] = s[i];
    }
    ll ans = 0;
    bool tmp = true;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<>());
    for (ll i = 0; i < n; i++) {
        if (v1[i] != s[i])
            tmp = false;
    }
    if (tmp) {
        cout << "INCREASING";
        return 0;
    }
    tmp = true;
    for (ll i = 0; i < n; i++) {
        if (v2[i] != s[i])
            tmp = false;
    }
    if (tmp) {
        cout << "DECREASING";
        return 0;
    }
    cout << "NEITHER";
    return 0;
}