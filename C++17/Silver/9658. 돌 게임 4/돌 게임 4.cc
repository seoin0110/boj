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
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

ll dp[1001];

ll func(ll a) {
    if (dp[a] > 0) {
        return dp[a];
    }

    if (func(a - 1) == 2 || (a -3 >= 0) && func(a - 3) == 2 || (a - 4 >= 0) && func(a - 4) == 2) {
        return dp[a] = 1;
    }
    else
        return dp[a] = 2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 2;
    if (func(n) == 1) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }

    return 0;
}