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

ll ans = 0;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n,m;
    cin >> n >> m;
    
    ll idx = 1;
    ll k;
    cin >> k;
    vector<ll>v(k);
    for(ll i = 0; i < k;i++){
        cin >> v[i];
        if(v[i] >= idx + m){
            ans += v[i] -(idx+m-1);
            idx += v[i] -(idx+m-1);
        }
        else if(v[i] < idx){
            ans += idx - v[i];
            idx -= idx - v[i];
        }
    }
    cout << ans;
    
    
}