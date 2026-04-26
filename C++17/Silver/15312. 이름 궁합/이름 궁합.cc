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

ll alp[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    string a, b;
    cin >> a >> b;
    ll n = a.length();
    vector<ll>v(2 * n);
    for (ll i = 0; i < 2 * n; i++) {
        if (i % 2)
            v[i] = alp[b[i / 2] - 'A'];
        else
            v[i] = alp[a[i / 2] - 'A'];
    }
    for (ll i = 2 * n - 2; i >=1; i--) {
        for (ll j = 0; j <= i; j++) {
            v[j] =( v[j] + v[j + 1]) % 10;
        }
    }
    cout << v[0] << v[1];

    return 0;
}