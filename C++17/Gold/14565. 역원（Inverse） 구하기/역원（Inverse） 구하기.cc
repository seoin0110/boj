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

ll gcd(ll a, ll b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}
ll x, y;
ll gcd_p(ll a, ll b) {
    if (b == 0) {
        x = 1, y = 1;
        return a;
    }
    ll retu = gcd_p(b, a % b);
    ll tmp = y;
    y = x - (a / b) * y;
    x = tmp;
    if (x <= 0) {
        x += b;
        y -= a;
    }
    return retu;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll a, b;
    cin >> a >> b;
    cout << a - b << ' ';
    if (gcd(a, b) != 1) {
        cout << -1;
        return 0;
    }

    gcd_p(b, a);
    cout << x;

    return 0;
}