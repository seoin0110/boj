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

string s[50];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
    }
    ll ans = 1;
    ll ans_flag = 0;
    for (ll i = min(n, m)-1; i >= 0; i--) {

        for (ll j = 0; j < n - i; j++) {
            if (ans_flag)
                break;
            for (ll k = 0; k < m - i; k++) {
                char t = s[j][k];
                if (s[j+i][k] != t) {
                    continue;
                }
                if (s[j][k + i] != t) {
                    continue;
                }
                if (s[j + i][k + i] != t) {
                    continue;
                }
                ans = (i + 1) * (i + 1);
                ans_flag = 1;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}