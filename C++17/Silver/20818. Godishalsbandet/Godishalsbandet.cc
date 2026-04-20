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
    string s;
    cin >> s;
    ll cnt = 0;
    ll ans = 0;
    for (ll j = 0; j < s.length() / 2; j++) {
        if (s[j] == 'B')
            cnt++;
    }
    ans = cnt;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] == 'B')
            cnt--;
        if (s[(i + s.length() / 2)%s.length()] == 'B')
            cnt++;
        ans = max(ans, cnt);
    }
    cout << ans;
}