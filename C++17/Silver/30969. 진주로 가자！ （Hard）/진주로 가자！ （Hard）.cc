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
    
    ll n;
    cin >> n;
    ll ans = 0;
    short jin = 0;
    vector<short>v;
    v.reserve(n);
    for (ll i = 0; i < n; i++) {
        string s;
        ll a;
        cin >> s >> a;
        if (s == "jinju") {
            jin = a;
        }
        else {
            if (a > 1000) {
                ans++;
            }
            else {
                v.push_back(a);
            }
        
        }
    
    }
    for (auto x : v) {
        if (x > jin)
            ans++;
    }
    cout << jin << '\n' << ans;
    return 0;
}