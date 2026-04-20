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
    ll n;
    cin >> n;
    ll small = 0;
    ll ans = 0;
    vector<ll>v(n);
    for(ll i = 0; i < n;i++){
        cin >> v[i];
    }
    small = v[0];
    cout << "0 ";
    for(ll i = 1; i < n;i++){
        ans = max(v[i] - small, ans);
        small = min(small, v[i]);
        cout << ans << ' ';
    }
}