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
    
    ll n, m;
    cin >> n >> m;
    vector<vector<ll> >v;
    for (ll i = 2; i <= n; i += 2)
        v.push_back({ i,1,i,m });
    for (ll i = 2; i <= m; i += 2)
        v.push_back({ 1,i,n,i });
    cout << v.size() << '\n';
    for (auto x : v) {
        for (auto y : x)
            cout << y << ' ';
        cout << '\n';
    }
    return 0;
}