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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    for (ll i = 5; i <= n; i++) {
        set<ll>st;
        for (ll j = 0; j <= i - 2; j++) {
            st.insert(dp[j] ^ dp[i - j - 2]);
        }
        ll tmp = 0;
        while (st.find(tmp) != st.end()) {
            tmp++;
        }
        dp[i] = tmp;
    }

    if (dp[n] == 0) {
        cout << "2";
    }
    else {
        cout << "1";
    }

    return 0;
}