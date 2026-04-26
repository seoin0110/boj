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
    
    ll n, m;
    cin >> n >> m;
    ll if_yun=0;
    ll ans = 0;
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        if_yun = 1;
    }
    for (ll i = 1; i <= 12; i++) {
        if (i == 1 || i ==3 || i == 5 || i == 7||i==8 || i==10||i==12) {
            ans += 3;
        }
        else if (i == 2) {
            if (if_yun) {
                ans += 1;
            }
            else {
                ans += 0;
            }
        }
        else {
            ans += 2;
        }
    }
    cout << ans;
    return 0;
}