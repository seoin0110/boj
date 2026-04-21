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
    
    ll ans = 0;
    ll mi = 100;
    for (ll i = 0; i < 7; i++) {
        ll tmp;
        cin >> tmp;
        if (tmp % 2) {
            ans += tmp;
            mi = min(tmp, mi);
        }
    }
    if (ans == 0) {
        cout << "-1";
        return 0;
    }
    cout << ans << '\n' << mi;

    return 0;
}