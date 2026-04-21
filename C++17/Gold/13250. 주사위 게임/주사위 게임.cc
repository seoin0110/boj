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

double dp[1000001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;
    dp[0] = 0.0;
    for (ll i = n-1; i >=0; i--) {
        double tmp = 0.000;
        for (ll j = 1; j <= 6; j++) {
            tmp += (1.00 / 6.00) * (1 + dp[j + i]);
        }
        dp[i] = tmp;
    }
    cout << fixed;
    cout.precision(13);
    cout << dp[0];

    return 0;
}