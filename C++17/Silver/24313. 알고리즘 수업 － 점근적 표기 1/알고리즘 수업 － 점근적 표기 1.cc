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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll c, n;
    cin >> c >> n;
    if (a > c) {
        cout << "0";
    }
    else if (a == c) {
        if (b <= 0) {
            cout << "1";
        }
        else
            cout << "0";
    }
    else {
        if (a * n + b <= c * n) {
            cout << "1";
        }
        else
            cout << "0";
    }
    return 0;
}