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
    
    string s;
    cin >> s;
    ll dp[50];
    dp[0] = 1;
    ll ans = 1;
    for (ll i = 1; i < s.length(); i++) {
        dp[i] = 1;
        for (ll j = 0; j < i; j++) {
            if (s[i] > s[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(dp[i], ans);
    }
    cout << 26 - ans;

    return 0;
}
