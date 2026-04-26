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
ll inf = 1e9 + 7;
ll dp[5001][5001];
vector<ll>v1(5000);
vector<ll>v2(5000);
ll func(ll a, ll b) {
    if (a < 0 || b < 0) {
        return inf;
    }
    if (dp[a][b] != 0) {
        return dp[a][b];
    }
    ll tmp1 = func(a - 1, b);
    if (tmp1 != inf && tmp1 % 2 == v1[a-1] % 2) {
        tmp1 += 2;
    }
    else {
        tmp1 += 1;
    }
    ll tmp2 = func(a, b - 1);
    if (tmp2 != inf && tmp2 % 2 == v2[b-1] % 2) {
        tmp2 += 2;
    }
    else {
        tmp2 += 1;

    }
    return dp[a][b] = min(tmp1, tmp2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll a, b;
    cin >> a;
    
    for (ll i = 0; i < a; i++) {
        cin >> v1[i];
    }
    cin >> b;
    
    for (ll i = 0; i < b; i++) {
        cin >> v2[i];
    }
    dp[0][1] = v2[0] % 2 == 0 ? 2 : 1;
    if (a > 0) {
        dp[1][0] = v1[0] % 2 == 0 ? 2 : 1;
    }
    cout << func(a, b);

    return 0;
}