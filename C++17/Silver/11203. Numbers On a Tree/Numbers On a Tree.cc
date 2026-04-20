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
    ll now = 1;
    for (ll i = 0; i <= n; i++) {
        now *= 2;
    }
    now -= 1;
    string s;
    if (cin >> s) {
        ll k = 1;
        for (ll i = 0; i < s.length(); i++) {
            
            if (s[i] == 'R') {
                k = k * 2 + 1;
            }
            else
                k = k * 2;
        }
        cout << now - k + 1;
    }
    else {
        cout << now;
    }
    return 0;
}
