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

ll inf = 1000000007;

ll a[1024];
ll b[1024];
ll j = 1;
ll bb;
//ll check[1024];
void func(ll aa) {
    if (aa * 2 <= bb)
    {
        func(aa * 2);
    }
    b[aa] = a[j];
    j++;
    if (aa * 2 + 1 <= bb)
        func(aa * 2 + 1);
    return;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    ll tmp;
    ll ma = 100000;
    ll mi = 0;

    ll c1 = 0;
    ll c2 = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp <= ma) {
            c1++;
            ans = max(c1, ans);

        }
        else {
            c1 = 1;
        }
        if (tmp >= mi) {
            c2++;
            ans = max(c2, ans);
        }
        else {
            c2 = 1;
        }
        ma = tmp;
        mi = tmp;
    }
    cout << ans;
    return 0;
}