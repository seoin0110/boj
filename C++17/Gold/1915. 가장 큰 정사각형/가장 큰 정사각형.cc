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

ll arr[1001][1001];
ll arr2[1001][1001];
ll dp[1001][1001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n, m;
    cin >> n >> m;
    
    for(ll i = 0; i < n;i++){
        string s;
        cin >> s;
        for(ll j = 0; j < m;j++){
            ll tmp = 0;
            if(s[j] == '1'){
                arr[i+1][j+1] = arr[i][j+1] + 1;
                arr2[i+1][j+1] = arr2[i+1][j] + 1;
            }
        }
    }
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            dp[i][j] = min({dp[i-1][j-1] + 1, arr[i][j], arr2[i][j]});
            ans = max(ans, dp[i][j]);
        }
    }
    
    cout << ans * ans;
    
    
    return 0;
}