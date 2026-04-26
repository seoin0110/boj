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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll up = 1;
    ll down = 1;
    for (ll i = 0; i < a; i++) {
        down *= (i + 1);
        up *= n--;
    }
    ll ans = 1;
    ans = ans * up / down;
    up = 1;
    down = 1;
    for (ll i = 0; i < b; i++) {
        up *= n--;
        down *= (i + 1);
    }
    ans = ans * up / down;
    cout << ans;
    return 0;
}