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

    ll s;
    string d;
    cin >> s >> d;
    if (s < d.length()) {
        cout << "No solution";
    }
    else {
        cout << d;
        for (ll i = 0; i < s - d.length(); i++) {
            cout << "0";
        }
    }
}