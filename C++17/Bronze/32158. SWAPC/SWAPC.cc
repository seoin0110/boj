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
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    ll a;
    vector<ll>P;
    vector<ll>C;
    cin >> a >> s;
    for (ll i = 0; i < a; i++) {
        if (s[i] == 'P') {
            P.push_back(i);
        }
        else if (s[i] == 'C') {
            C.push_back(i);
        }
    }

    for (ll i = 0; i < P.size() && i < C.size(); i++) {
        s[P[i]] = 'C';
        s[C[i]] = 'P';
    }
    cout << s;

    return 0;
}