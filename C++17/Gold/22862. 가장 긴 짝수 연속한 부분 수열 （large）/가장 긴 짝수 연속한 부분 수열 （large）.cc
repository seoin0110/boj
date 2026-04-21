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

ll n, q;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    

    ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll l = 0;
    ll r = 0;
    ll odd = 0;
    ll even = 0;
    if (v[0] % 2 == 0)
        even++;
    else
        odd++;
    ll ans = 0;
    while (l < n) {
        if (odd > k) {
            if (v[l] % 2 == 0)
                even--;
            else
                odd--;
            l++;
        }
        else {
            ans = max(ans, r - l + 1 - odd);
            r++;
            if (r == n) {
                r = n - 1;
                l++;
            }
            else {
                if (v[r] % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
    }
    cout << ans;
    return 0;
}