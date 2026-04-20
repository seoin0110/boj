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
ll dp[11];
ll ans = 0;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll y;
    cin >> y;
    dp[0] = n;
    for(ll i = 1; i <=y;i++ ){
        dp[i] = dp[i-1]* 1.05;
        if(i >=3){
            dp[i] = max(dp[i], (ll)(dp[i-3]*1.2));
        }
        if(i>=5){
            dp[i] = max(dp[i], (ll)(dp[i-5]*1.35));
        }
    }
    
    cout << dp[y];
    return 0;
}