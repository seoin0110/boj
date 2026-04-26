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
#define inf 1000000007
int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll n;
    cin >> n;
    ll ans = 0;
    
    for (ll i = 0; i < n;i++) {
        ll a;
        cin >> a;
        ans += a;
    }
    ans -= n*(n - 1) / 2;

    cout << ans << '\n';
    return 0;

}

