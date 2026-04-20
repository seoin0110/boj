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
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

vector<ll>v[1001];
ll indegrees[1001];
vector<ll>ans;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll a, now;
        cin >> a;
        cin >> now;
        for (ll j = 0; j < a - 1; j++) {
            ll next;
            cin >> next;
            v[now].push_back(next);
            indegrees[next]++;
            now = next;
        }
    }
    queue<ll>q;
    for (ll i = 1; i <= n; i++) {
        if (indegrees[i] == 0) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        ll now = q.front();
        q.pop();
        ans.push_back(now);
        for (auto x : v[now]) {
            if (indegrees[x] == 1) {
                q.push(x);
            }
            indegrees[x]--;
        }
    }
    if (ans.size() != n) {
        cout << 0;
    }
    else {
        for (auto x : ans) {
            cout << x << '\n';
        }
    }
    return 0;
}