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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n = 1;
    string s;
    while (cin >> s) {
        string ans = "";
        if (s == "0") {
            break;
        }
        while (true) {
            if (s.length() % 2 == 1) {
                ans = s;
                break;
            }
            ll flag = 1;
            for (ll i = 0; i < s.length() / 2; i++) {
                ll times = s[i * 2] - '0';
                ll num = s[i * 2 + 1];
                for (ll j = 0; j < times; j++) {
                    ans += num;
                }

                if (i != s.length() / 2 - 1) {
                    if (num == s[(i + 1) * 2 + 1])
                        flag = 0;
                }
            }
            if (flag == 0) {
                ans = s;
                break;
            }
            if (ans.length() % 2 == 1 || ans == s) {
                break;
            }
            else {
                s = ans;
                ans = "";
            }

        }
        cout << "Test " << n << ": " << ans <<'\n';
        n++;
    }
    
    return 0;
}