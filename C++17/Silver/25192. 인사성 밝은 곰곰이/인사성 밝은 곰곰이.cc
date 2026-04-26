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
    cin >> n;
    ll ans = 0;
    set<string>st;
    for (ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "ENTER") {
            ans += st.size();
            st.clear();
        }
        else {
            st.insert(s);
        }
    }
    ans += st.size();
    cout << ans;
    return 0;
}
