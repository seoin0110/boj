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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    

    ll n, l;
    ll start = 1;
    cin >> n >> l;
    vector<ld>v(n);
    vector<pair<ld, ld> >q;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    q.push_back({ 10, 0.1 });
    sort(v.begin(), v.end());
    if (l == 1) {
        if (n == 1) {
            cout << "10";
        }
        else {
            cout << "no fika";
        }
        return 0;
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < i; j++) {
            ll t = 0;
            vector<pair<ld, ld> >tmp;
            while ((v[i] - v[j]) / (t * l + l - 1) > 10) t++;
            while ((v[i] - v[j]) / (t * l + 1) >= 0.1) {
                tmp.push_back({ min((v[i] - v[j]) / (t * l + 1), (ld)10), max((v[i] - v[j]) / (t * l + l - 1), (ld)0.1)});
                t++;
            }
            
            ll idx1 = 0;
            ll idx2 = 0;
            vector<pair<ld, ld> > new_q;
            while (idx1 < q.size() && idx2 < tmp.size()) {
                if (q[idx1].first >= tmp[idx2].second && q[idx1].second <= tmp[idx2].second && q[idx1].first <= tmp[idx2].first) {
                    new_q.push_back({ q[idx1].first, tmp[idx2].second });
                    idx2++;
                }
                else if (q[idx1].second <= tmp[idx2].first && q[idx1].second >= tmp[idx2].second && q[idx1].first >= tmp[idx2].first) {
                    new_q.push_back({ tmp[idx2].first, q[idx1].second });
                    idx1++;
                }
                else if (q[idx1].first <= tmp[idx2].first && q[idx1].second >= tmp[idx2].second) {
                    new_q.push_back({ q[idx1].first, q[idx1].second });
                    idx1++;
                }
                else if (q[idx1].first >= tmp[idx2].first && q[idx1].second <= tmp[idx2].second) {
                    new_q.push_back({ tmp[idx2].first, tmp[idx2].second });
                    idx2++;
                }
                else if (tmp[idx2].second > q[idx1].first) {
                    idx2++;
                }
                else {
                    idx1++;
                }
            }
            q.clear();
            q = new_q;
        }
    }

    if (q.empty()) {
        cout << "no fika";
    }
    else {
        cout << fixed;
        cout.precision(15);
        cout << q[0].first;
    }

    return 0;
}