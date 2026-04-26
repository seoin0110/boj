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
ll seg2[4000000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, q;
    cin >> n >> q;
    ll base = 1;
    for (base = 1; base < n; base *= 2);
    for (ll i = 0; i < n; i++) {
        cin >> seg[base+i];
        seg2[base + i] = seg[base + i];
    }
    for (ll i = base - 1; i >= 1; i--) {
        seg[i] = min(seg[i*2],seg[i*2+1]);
        seg2[i] = max(seg2[i * 2], seg2[i * 2 + 1]);
    }
    while (q--) {
        ll b, c;
        cin >> b >> c;
        if(b==c){
            cout << seg[base + b - 1]<<' '<< seg2[base + b - 1]<<'\n';
            continue;
        }
        ll ans = 1000000000;
        ll ans2 = 0;
        b = base + b - 1;
        c = base + c - 1;
        while (b <= c) {
            if (b % 2 == 1) {
                ans = min(ans,seg[b]);
                ans2 = max(ans2, seg2[b]);
                b++;
            }
            if (c % 2 == 0) {
                ans = min(ans, seg[c]);
                ans2 = max(ans2, seg2[c]);
                c--;
            }
            b /= 2;
            c /= 2;
        }
        cout << ans << ' '<< ans2 << '\n';
    }
    return 0;
}