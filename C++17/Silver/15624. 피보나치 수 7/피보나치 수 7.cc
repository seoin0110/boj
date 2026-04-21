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
using ll = long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<ll>v(n+1);
    v[0] = 0;
    v[1] = 1;
    for (ll i = 2; i <= n; i++) {
        v[i] = (v[i - 1] + v[i - 2]) % 1000000007;
    }
    cout << v[n]% 1000000007;
    
    return 0;
}