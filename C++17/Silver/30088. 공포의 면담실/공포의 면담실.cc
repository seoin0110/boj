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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i = 0; i < n;i++){
        ll k;
        cin >> k;
        ll tmp = 0;
        for(ll j = 0; j < k;j++){
            ll a;
            cin >> a ;
            tmp += a;
        }
        v[i] = tmp;
    }
    sort(v.begin(),v.end());
    
    ll ans = 0;
    ll sum = 0;
    for(ll i = 0; i < n;i++){
        sum += v[i];
        ans += sum;
    }
    cout << ans;
}