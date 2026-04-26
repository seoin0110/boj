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

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll n_ = 4e5 + 100, inf = 1e18, mod = 1e9 + 7, sqrtN = 333, p = 27;
ll n, m, k, tc = 1, a, b, c, d, sum, x, y, z, base, ans;
ll par[n_], checked[n_];
P rev[n_];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    x = n + 1;
    for (int i = 1; i < n; i++) {
        cin >> a;
        if (a == 2) {
            if (!par[i]) {
                par[i] = x++;
                rev[par[i]].first = i;
            }
            par[i + 1] = par[i];
            rev[par[i]].second = i + 1;
        }
        else {
            if (!par[i]) {
                par[i] = x++;
                rev[par[i]].first = i;
            }
            if (rev[par[i]].first == i) {
                rev[par[i]].second = x++;
                par[x - 1] = par[i];
                for (int i = 0; i < a - 3; i++) {
                    rev[x - 1].first = x;
                    par[x] = x - 1;
                    x++;
                }
                par[i + 1] = x - 1;
                rev[x - 1].first = i + 1;
            }
            else {
                b = par[i];
                a--;
                while (rev[b].second) {
                    if (!par[b]) {
                        rev[x].first = b;
                        par[b] = x++;
                    }
                    b = par[b], a--;
                }
                if (a == 1) {
                    a--;
                    rev[b].second = i + 1;
                    par[i + 1] = b;
                }
                else {
                    rev[b].second = x++;
                    par[x - 1] = b;
                    a--;
                    for (int i = 0; i < a - 1; i++) {
                        rev[x - 1].first = x;
                        par[x] = x - 1;
                        x++;
                    }
                    par[i + 1] = x - 1;
                    rev[x - 1].first = i + 1;
                }
            }
        }
    }
    cin >> x >> y;
    queue <P>q;
    checked[x] = 0;
    q.push({ x,0 });
    while (q.size()) {
        a = q.front().first, b = q.front().second;
        q.pop();
        if (!a)continue;
        if (a == y) {
            cout << b;
            return 0;
        }
        if (!checked[par[a]]) {
            checked[par[a]] = true;
            q.push({ par[a],b + 1 });
        }
        if (!checked[rev[a].first]) {
            checked[rev[a].first] = true;
            q.push({ rev[a].first,b + 1 });
        }
        if (!checked[rev[a].second]) {
            checked[rev[a].second] = true;
            q.push({ rev[a].second,b + 1 });
        }
    }
    return 0;
}