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
    ll k;
    ll a, b, c, d;
    cin >> k >> a >> b >> c >> d;
    if (a * k + b == c * k + d) {
        cout << "Yes " << a * k + b;
    }
    else {
        cout << "No";
    }
    return 0;
}