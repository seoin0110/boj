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
    
    ll n;
    cin >> n;
    vector<pair<ll,pair<string, ll> > >v(n);
    for (ll i = 0; i < n; i++) {
        string s;
        ll tmp1, tmp2;
        cin >> s >> tmp1 >> tmp2;
        v[i].first = tmp1;
        v[i].second.first = s;
        v[i].second.second = tmp2;
    }
    sort(v.begin(), v.end());
    string S = "";
    for (ll i = 0; i < n; i++) {
        char tmp = v[i].second.first[v[i].second.second - 1];
        if (tmp >= 'a' && tmp <= 'z')
            tmp = tmp - 'a' + 'A';
        S += tmp;
    }
    cout << S;
    return 0;
}