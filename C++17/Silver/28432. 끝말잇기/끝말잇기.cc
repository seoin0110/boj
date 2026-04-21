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
    vector<string>v(n);
    set<string>st;
    ll idx = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == "?") {
            idx = i;
        }
        else {
            st.insert(v[i]);
        }
    }
    ll m;
    string ans;
    cin >> m;
    if (n == 1) {
        string s;
        cin >> s;
        cout << s;
        return 0;
    }
    else if (idx > 0 && idx < n - 1) {
        for (ll i = 0; i < m; i++) {
            string s;
            cin >> s;
            if (s[s.length() - 1] == v[idx + 1][0] && s[0] == v[idx - 1][v[idx - 1].length() - 1] && st.find(s) == st.end()) {
                ans = s;
            }
        }
    }
    else if (idx == 0) {
        for (ll i = 0; i < m; i++) {
            string s;
            cin >> s;
            if (s[s.length() - 1] == v[idx + 1][0] && st.find(s) == st.end()) {
                ans = s;
            }
        }
    }
    else {
        for (ll i = 0; i < m; i++) {
            string s;
            cin >> s;
            if (s[0] == v[idx - 1][v[idx - 1].length() - 1] && st.find(s) == st.end()) {
                ans = s;
            }
        }
    }
    cout << ans;


}