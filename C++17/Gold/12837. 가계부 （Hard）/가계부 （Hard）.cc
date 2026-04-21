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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            b = base + b - 1;
            seg[b] += c;
            b /= 2;
            while (b > 0) {
                seg[b] = seg[b*2] + seg[b * 2 + 1];
                b /= 2;
            }
        }
        if (a == 2) {
            ll sum = 0;
            b = base + b - 1;
            c = base + c - 1;
            while (b <= c) {
                if ((b % 2) == 1) {
                    sum += seg[b];
                    b++;
                }
                if ((c % 2) == 0) {
                    sum += seg[c];
                    c--;
                }
                b /= 2;
                c /= 2;
            }
            cout << sum << '\n';
        }
    }
    return 0;
}