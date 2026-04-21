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
    queue<ll>q;
    for (ll i = 1; i <= n; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
        if (!q.empty()) {
            q.push(q.front());
            q.pop();
        }
    }

}