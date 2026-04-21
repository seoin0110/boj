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
ll dp[1001][1001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    string s;
    cin >> n >> s;
    ll c = 0;
    for(ll i = 0; i < n;i++)
        if (s[i] == 'C') {
            c++;
        }
    ll ans = c;
    for (ll i = 1; i <= c; i++) {
        ll tmp = 0;
        if (c % i == 0) {
            tmp = c / i - 1;
        }
        else
            tmp = c / i;
        if (n - c >= tmp) {
            ans = i;
            break;
        }

    }
    cout << ans;
    return 0;
}