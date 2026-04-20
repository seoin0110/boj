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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        ans = a ^ ans;
    }
    if (ans == 0) {
        cout << "cubelover";
    }
    else {
        cout << "koosaga";
    }

    return 0;
}