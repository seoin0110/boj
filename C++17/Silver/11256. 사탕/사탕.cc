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
ll dp[100001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll j, n;
        cin >> j >>  n;
        vector<ll>v(n);
        for(ll i = 0; i < n;i++){
            ll a, b;
            cin >>a >> b;
            v[i] = a*b;
        }
        sort(v.begin(),v.end());
        ll ans=0;
        ll cnt = n;
        for(ll i = n-1; i>=0;i--){
            ans += v[i];
            if(ans >= j){
                cnt = n-i;
                break;
            }
        }
        cout << cnt <<'\n';
    }
}