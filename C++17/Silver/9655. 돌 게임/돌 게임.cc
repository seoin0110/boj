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

ll dp[1001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 0;
    dp[3] = 1;
    for (ll i = 4; i <= n; i++) {
        if ((!dp[i - 3]) | (!dp[i - 1])) {
            dp[i] = 1;
        }
        else
            dp[i] = 0;
    }

    if (dp[n] == 1) {
        cout << "SK";
    }
    else
        cout << "CY";
    return 0;
}