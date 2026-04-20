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
ll chk[10];
ll n, k;
string s[10];
set<string>st;
void func(ll a, string ss) {
    if (a == k) {
        st.insert(ss);
        return;
    }
    for (ll i = 0; i < n; i++) {
        if (chk[i] == 0) {
            chk[i] = 1;
            func(a + 1,ss + s[i]);
            chk[i] = 0;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
    }

    func(0, "");
    cout << st.size();

}