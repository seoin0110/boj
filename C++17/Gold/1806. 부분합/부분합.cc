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
    
    ll n, s;
    cin >> n >> s;
    vector<ll>v(n+1);
    for (ll i = 0; i < n; i++) {
        cin >> v[i+1];
        v[i + 1] += v[i];
    }
    ll sum;
    ll left = 0;
    ll right = 1;
    ll ans = 10000000000;
    while (left <= right && right <= n) {
        sum = v[right] - v[left];
        if (sum >= s) {
            ans = min(ans, right - left);
            left++;
        }
        else {
            right++;
        }
    }
    if (ans == 10000000000)
        cout << 0;
    else
        cout << ans;
    return 0;
}