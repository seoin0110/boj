#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    ll ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.length() % 2 != 0) {
            continue;
        }
        stack<char>st;
        ll flag = 1;
        for (ll j = 0; j < s.length(); j++) {
            if (st.empty()) {
                st.push(s[j]);
            }
            else if (st.top() == s[j]) {
                st.pop();
            }
            else {
                st.push(s[j]);
            }
        }
        if (st.size() >= 1)
            flag = 0;
        if (flag) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
