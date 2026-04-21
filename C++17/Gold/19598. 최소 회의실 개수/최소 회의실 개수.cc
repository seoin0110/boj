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

    vector<pair<ll, ll> > v(n);
    priority_queue<ll,vector<ll>, greater<ll> >q;
    for (ll i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    q.push(v[0].second);
    for (ll i = 1; i < n; i++) {
        ll tmp = q.top();
        q.pop();
        if (tmp <= v[i].first)
            q.push(v[i].second);
        else {
            q.push(v[i].second);
            q.push(tmp);
        }
    }
    cout << q.size();
}