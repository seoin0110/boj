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
    
    ll n, m, ans = 0;
    cin >> n >> m;
    vector<ll>v(m,0);
    v[0]++;
    ll sum = 0;
    for (ll i = 1; i <= n; i++) {
        ll tmp;
        cin >> tmp;
        sum += tmp;
        sum = sum % m;
        ans += v[sum];
        v[sum]++;
    }
    cout << ans;
    return 0;
}