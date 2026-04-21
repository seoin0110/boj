#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll l;
    cin >> l;
    ll n;
    vector<ll>v(l+1);
    v[0] = 0;
    for (ll i = 0; i < l; i++) {
        cin >> v[i+1];
    }
    sort(v.begin(), v.end());
    cin >> n;

    for (ll i = 0; i < l; i++) {
        if (v[i] == n || v[i + 1] == n) {
            cout << "0";
            return 0;
        }
        if (v[i] < n && v[i + 1]> n) {
            cout << (n - v[i] - 1) * (v[i + 1] - n ) + v[i+1]-n-1;
            return 0;
        }
    }
    return 0;
}
