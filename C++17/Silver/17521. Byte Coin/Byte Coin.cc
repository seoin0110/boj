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
    ll n, w;
    cin >> n >> w;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll a = 0;
    for (ll i = 0; i < n-1; i++) {
        if (v[i] > v[i + 1]) {
            w += v[i] * a;
            a = 0;
        }
        else if (v[i] < v[i + 1]) {
            a += w / v[i];
            w -= w / v[i] * v[i];
        }
    }
    w += v[n - 1] * a;
    cout << w;
    return 0;
}