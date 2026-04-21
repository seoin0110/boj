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
//ll arr[1000000];
ll seg[4000000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, q;
    cin >> n >> q;
    ll base = 1;
    for (base = 1; base < n; base *= 2);
    while (q--) {
        ll a,b, c;
        cin >>a>> b >> c;
        if (a == 1) {
            b = base + b - 1;
            seg[b] = c;
            b /= 2;
            while (b > 0) {
                seg[b] = seg[2 * b] + seg[2 * b + 1];
                b /= 2;
            }
        }
        else if (a == 0) {
            if (b == c) {
                cout << seg[base + b - 1] << '\n';
                continue;
            }
            if (b > c)
                swap(b, c);
            ll ans = 0;
            b = base + b - 1;
            c = base + c - 1;
            while (b <= c) {
                if (b % 2 == 1) {
                    ans +=seg[b];
                    b++;
                }
                if (c % 2 == 0) {
                    ans +=seg[c];
                    c--;
                }
                b /= 2;
                c /= 2;
            }
            cout << ans << '\n';
        }
        
    }
    return 0;
}