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
#include <time.h>

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
    srand(time(NULL));
    ll now = rand() % 9999 + 1;
    ll a = 0;
    for (ll i = 1; i <= 9999; i++) {
        cout << "? A " << i << endl;
        ll tmp;
        cin >> tmp;
        if (tmp == 1) {
            a = i;
        }
    }
    if (a == 0) {
        a = 10000;
    }
    ll b = 0;
    for (ll i = 1; i <= 9999; i++) {
        if (i == now) continue;
        cout << "? B " << i << endl;
        ll tmp;
        cin >> tmp;
        if (tmp == 1) {
            b = i;
        }
    }
    if (b == 0) {
        b = 10000;
    }
    cout << "! " << a + b;

    return 0;
}