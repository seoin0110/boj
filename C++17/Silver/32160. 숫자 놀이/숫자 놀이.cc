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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);


    ll n;
    cin >> n;
    ll ans;
    if ((n / 2) % 2 == 1) {
        cout << n - 1 << '\n';
        ans = n - 1;

    }
    else {
        cout << n << '\n';
        ans = n;
    }
    ll tmp = n;
    ll now = n - 1;
    ll cnt = 0;
    while (now >= 1) {
        if (now == 1) {
            break;
        }
        else {
            cout << now << ' ' << now - 1 << '\n';
            cnt++;
            now -= 2;
            tmp -= 1;
        }
    }

    for (ll i = 0; i < (n / 2) / 2; i++) {
        cout << "1 1\n";
        cnt++;
    }
    if ((n / 2) % 2 == 1) {
        for (; cnt < n - 3; cnt++) {
            cout << "0 0\n";
        }
        if (cnt < n - 2) {
            cout << "1 0\n";
            cnt++;
        }
        if (cnt < n - 1) {
            cout << n << " 1\n";
            cnt++;
        }
    }
    else {
        for (; cnt < n - 2; cnt++) {
            cout << "0 0\n";
        }
        if (cnt < n - 1) {
            cout << n << " 0\n";
            cnt++;
        }
    }


    return 0;
}