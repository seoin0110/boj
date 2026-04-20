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
ll cnt[10];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++) {

        cin >> v[i];
    }
    ll left = 0;
    ll right = 0;
    ll num = 0;
    ll ans = 1;
    while (right < n) {
        if (num > 2) {
            if (cnt[v[left++]]-- == 1) {
                num--;
            }
        }
        else {
            if (cnt[v[right]]++ == 0) {
                num++;
            }
            if (num <= 2) {
                ans = max(ans, right - left + 1);
            }
            right++;
        }       
    }
    cout << ans;
    return 0;
}
