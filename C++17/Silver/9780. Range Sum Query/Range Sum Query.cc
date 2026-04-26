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
ll inf = -1000000007;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        vector<ll>v(a+1, 0);
        for (ll i = 1; i <= a; i++) {
            cin >> v[i];
            v[i ] = v[i] + v[i - 1];
        }
        for (ll i = 0; i < b; i++) {
            ll tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            cout << v[tmp2+1] - v[tmp1] << '\n';
        }
        cout << '\n';
    }

    return 0;
}