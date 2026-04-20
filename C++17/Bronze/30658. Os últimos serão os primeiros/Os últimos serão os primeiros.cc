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
    ll a;
    while (1) {
        cin >> a;
        if (a == 0) {
            break;
        }
        vector<ll>v(a);
        for (ll i = 0; i < a; i++) {
            cin >> v[i];
        }
        for (ll i = a-1; i >= 0; i--) {
            cout << v[i] <<'\n';
        }
        cout << 0 << '\n';
    }

    return 0;
}