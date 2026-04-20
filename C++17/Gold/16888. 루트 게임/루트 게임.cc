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

ll dp[1000001];
// n 결과 n-1, n-4 ,... 상대방 입장이 되는데 상대 입장에서 상대가 나니까 상대가 이기는 경우가 하나라도 있으면 그렇게 넘겨주면 되니까 내가 이김
// dp[a] : a 남았을 때 누가 이김? 1 나, 2 상대방, 그 전에서 후공이 다 이기면 선공이 이김
ll func(ll a) {
    if (dp[a]) {
        return dp[a];
    }
    ll ans = 1;
    ll tmp = 1;
    while (a - tmp * tmp >= 0) {
        if (func(a - tmp * tmp) == 2) {
            return dp[a] = 1;
        }
        tmp++;
    }
    return dp[a] = 2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll t;
    cin >> t;

    dp[0] = 2;
    dp[1] = 1;

    while (t--) {
        ll a;
        cin >> a;
        if (func(a) == 1) {
            cout << "koosaga\n";
        }
        else {
            cout << "cubelover\n";
        }
    }

    return 0;
}