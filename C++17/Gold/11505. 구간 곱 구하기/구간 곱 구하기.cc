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
    ll n, q,p;
    cin >> n >> q>>p;
    ll base = 1;
    for (base = 1; base < n; base *= 2);
    for (ll i = 0; i < n; i++) {
        cin >> seg[base+i];
        seg[base + i] %= 1000000007;
    }
    for (ll i = base - 1; i >= 1; i--) {
        seg[i] = (seg[i*2]*seg[i*2+1])%1000000007;
    }
    q += p;
    while (q--) {
        ll a,b, c;
        cin >>a>> b >> c;
        if (a == 1) {
            b = base + b - 1;
            seg[b] = c;
            b /= 2;
            while (b > 0) {
                seg[b] = (seg[2 * b] * seg[2 * b + 1]) % 1000000007;
                b /= 2;
            }
        }
        else if (a == 2) {
            if (b == c) {
                cout << seg[base + b - 1] % 1000000007 << '\n';
                continue;
            }
            ll ans = 1;
            b = base + b - 1;
            c = base + c - 1;
            while (b <= c) {
                if (b % 2 == 1) {
                    ans = (ans*seg[b]) % 1000000007;
                    b++;
                }
                if (c % 2 == 0) {
                    ans = (ans*seg[c]) % 1000000007;
                    c--;
                }
                b /= 2;
                c /= 2;
            }
            cout << ans%1000000007 << '\n';
        }
        
    }
    return 0;
}