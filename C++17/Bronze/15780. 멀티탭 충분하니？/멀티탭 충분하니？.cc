#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    ll k;
    cin >> n >> k;
    ll ans = 0;
    for (ll i = 0; i < k; i++) {
        ll a;
        cin >> a;
        ans += (a + 1) / 2;
    }
    if (n > ans) {
        cout << "NO";
    }
    else
        cout << "YES";
    return 0;
}
