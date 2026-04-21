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
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll sum = 0;
        ll max_score = 0;
        vector<pair<ll, ll> >v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i].first;
            sum += v[i].first;
            v[i].second = i + 1;
        }
        sort(v.begin(), v.end(), greater<>());
        if (v[0].first == v[1].first) {
            cout << "no winner\n";
        }
        else if (v[0].first * 2 <= sum) {
            cout << "minority winner " << v[0].second << '\n';
        }
        else {
            cout << "majority winner " << v[0].second << '\n';
        }
    }
    return 0;
}