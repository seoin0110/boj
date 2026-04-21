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
    
    ll n;
    cin >> n;
    vector<pair<ll, ll> > v(n);
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++) {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    return 0;
}