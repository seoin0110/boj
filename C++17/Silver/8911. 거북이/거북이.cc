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
    for (ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        ll left=0, right=0, up=0, down=0;
        ll x = 0;
        ll y = 0;
        ll direction = 0;
        for (ll j = 0; j < s.size(); j++) {

            if (s[j] == 'F') {
                if (direction == 0) {
                    y += 1;
                    up = max(up, y);
                }else if (direction == 1) {
                    x += 1;
                    right = max(right, x);
                }
                else if (direction == 2) {
                    y -= 1;
                    down = min(down, y);
                }
                else {
                    x -= 1;
                    left = min(left, x);
                }
            }else if (s[j] == 'B') {
                if (direction == 0) {
                    y -= 1;
                    down = min(down, y);
                }
                else if (direction == 1) {
                    x -= 1;
                    left = min(left, x);
                }
                else if (direction == 2) {
                    y += 1;
                    up = max(up, y);
                }
                else {
                    x += 1;
                    right = max(right, x);
                }
            }
            else if (s[j] == 'L') {
                direction = (direction + 3) % 4;
            }
            else {
                direction = (direction + 1) % 4;
            }
        }
        cout << (right - left) * (up - down) <<'\n';
    }
    return 0;
}