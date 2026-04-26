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
    
    ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[k - 1];
    return 0;
}