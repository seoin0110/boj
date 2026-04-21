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
    bb = 1;
    for (ll i = 0; i < n; i++) bb *= 2;
    bb -= 1;
    for (ll i = 1; i <= bb; i++)cin >> a[i];
    func(1);
    ll kk = 1;
    ll index = 1;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < kk; j++) {
            cout << b[index++]<< ' ';
        }
        cout << '\n';
        kk*=2;
    }
    return 0;
}