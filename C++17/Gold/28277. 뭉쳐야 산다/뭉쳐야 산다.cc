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

set<ll>s[500000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, q;
    cin >> n >> q;
    for (ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        for (ll j = 0; j < k; j++) {
            ll a;
            cin >> a;
            s[i].insert(a);
        }
    }

    for (ll i = 0; i < q; i++) {
        ll a;
        cin >> a;
        if (a == 1) {
            ll b, c;
            cin >> b >> c;
            if (s[b - 1].size() < s[c - 1].size()) {
                swap(s[b - 1], s[c - 1]);
            }
            for (auto x : s[c - 1]) {
                s[b - 1].insert(x);
            }
            s[c - 1].clear();
        }
        else {
            ll b;
            cin >> b;
            cout << s[b - 1].size() << '\n';
        }
    }
    
    return 0;
}