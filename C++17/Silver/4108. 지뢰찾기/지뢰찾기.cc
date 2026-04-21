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
using ll = long long;
using namespace std;
ll dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
ll dy[8] = { -1,-1,-1,0,0,1,1,1 };
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    while (1) {
        ll r, c;
        cin >> r >> c;
        if (r == 0 && c == 0) {
            return 0;
        }
        vector<string>s(r);
        for (ll i = 0; i < r; i++) {
            cin >> s[i];
        }

        for (ll i = 0; i < r; i++) {
            for (ll j = 0; j < c; j++) {
                if (s[i][j] == '*') {
                    cout << '*';
                    continue;
                }
                ll cnt = 0;
                for (ll k = 0; k < 8; k++) {
                    if (i + dx[k] >= 0 && i + dx[k] < r && j + dy[k] >= 0 && j + dy[k] < c) {
                        if (s[i + dx[k]][j + dy[k]] == '*')
                            cnt++;
                    }
                }
                cout << cnt;
            }
            cout << '\n';
        }

    }
    
    return 0;
}