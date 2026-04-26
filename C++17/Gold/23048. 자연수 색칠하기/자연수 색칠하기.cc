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

ll check[500001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll cnt = 1;
    check[1] = 1;
    for (ll i = 2; i <= n; i++) {
        if (check[i] == 0) {
            cnt++;
            check[i] = cnt;
            for (ll j = i; j <= n; j = j + i)
                check[j] = cnt;
        }
    }

    cout << cnt<<'\n';
    for (ll i = 1; i <= n; i++) {
        cout << check[i]<< ' ';
    }
}