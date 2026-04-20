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

ll idx[1000000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll a, p;
    cin >> a >> p;
    ll idx_n = 1;
    while (idx[a] == 0) {

        idx[a] = idx_n;
        ll tmp = 0;
        while (a > 0)
        {
            ll tmp2 = 1;
            for (ll i = 0; i < p; i++)
                tmp2 *= (a % 10);
            tmp += tmp2;
            a /= 10;
        }
        a = tmp;
        idx_n++;
    }
    cout << idx[a] - 1;
    return 0;
}