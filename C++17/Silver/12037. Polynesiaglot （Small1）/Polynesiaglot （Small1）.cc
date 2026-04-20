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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    ll dp[16][2];
    ll cnt = 1;
    while(t--){
        ll c,v,l;
        cin >> c >> v >> l;
        for(ll i = 0; i < 16;i++)
        {
            dp[i][0] = 0;
            dp[i][1] = 0;
        }
        dp[1][0] = c;
        dp[1][1] = v;
        for(ll i = 2; i <= l;i++){
            dp[i][0] = (dp[i-1][1] * c)%1000000007;
            dp[i][1] = ((dp[i-1][1]+dp[i-1][0]) * v) %1000000007;
        }
        
        cout << "Case #" << cnt++ << ": " <<dp[l][1]%1000000007<<'\n';
    }
    
    return 0;
}