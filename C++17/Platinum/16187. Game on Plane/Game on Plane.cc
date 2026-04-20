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

ll dp[5001];
ll checked[5001][5001];
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
    for (ll i = 5; i <= 5000; i++) {
        set<ll>st;
        for (ll j = 0; j <= i - 2; j++) {
            checked[i][dp[j] ^ dp[i - j - 2]] = 1;
        }
        ll tmp = 0;
        while (checked[i][tmp] == 1) {
            tmp++;
        }
        dp[i] = tmp;
    }
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        if (dp[a] == 0) {
            cout << "Second\n";
        }
        else {
            cout << "First\n";
        }
    }

    return 0;
}