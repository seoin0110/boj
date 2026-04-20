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
    ll a = 1;
    ll b = 1;
    for (ll i = 3; i <= n; i++) {
        ll tmp = (a + b)% 1000000007;
        a = b;
        b = tmp;
    }
    cout << b%1000000007<< ' ' << n-2;
    return 0;
}