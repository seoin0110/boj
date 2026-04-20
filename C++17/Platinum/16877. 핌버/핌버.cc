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

ll pibo[34];
ll dp[3000001];
ll check[3000001];
ll func(ll a) {
    if (dp[a] >= 0) {
        return dp[a];
    }

    ll tmp = 1;
    while (a - pibo[tmp] >= 0) {
        ll now = func(a - pibo[tmp]);
        check[now] = a;
        tmp++;
    }
    tmp = 0;
    while (check[tmp] == a)tmp++;
    return dp[a] = tmp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    pibo[1] = 1;
    pibo[2] = 1;
    for (ll i = 0; i <= 3000000; i++)dp[i] = -1;
    dp[0] = 0;
    dp[1] = 1;
    for (ll i = 3; i <= 33; i++) {
        pibo[i] = pibo[i - 1] + pibo[i - 2];
    }
    ll n;
    ll ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        ans ^= func(a);
    }
    if (ans == 0) {
        cout << "cubelover";
    }
    else {
        cout << "koosaga";
    }


    return 0;
}