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
using ll = long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll flag = 0;
    if ((n + 1) * (n + 1) + 4 * n * (n + 2) < 0) {
        cout << -1;
        return 0;
    }
    for (ll i = 1; i*i <= n; i++) {
        if (flag == 1)
            break;
        for (ll j = 1; j * j <= n + 2; j++) {
            if (n % i == 0 && (n+2) % j == 0) {
                if (-i * ((n+2) / j) + j * (n / i) == n + 1) {
                    flag = 1;
                    cout << i << ' ' << j << ' ' << n / i << ' ' << -(n+2) / j;
                    break;
                }
                else if (i * ((n + 2) / j) - j * (n / i) == n + 1) {
                    flag = 1;
                    cout << i << ' ' << -j << ' ' << n / i << ' ' << (n + 2) / j;
                    break;
                }
                else if (-i * j + ((n + 2) / j) * (n / i) == n + 1) {
                    flag = 1;
                    cout << i << ' ' << ((n + 2) / j) << ' ' << n / i << ' ' << - j;
                    break;
                }
                else if (i * j - ((n + 2) / j) * (n / i) == n + 1) {
                    flag = 1;
                    cout << i << ' ' << -((n + 2) / j) << ' ' << n / i << ' ' << j;
                    break;
                }
            }
        }
    }
    if (flag == 0)
        cout << -1;
    return 0;
}