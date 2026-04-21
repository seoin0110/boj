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
    ll d, p, q;
    cin >> d >> p >> q;
    
    if (d % q == 0 || d % p == 0 || d% (p+q)==0) {
        cout << d;
        return 0;
    }
    if (p == q) {
        cout << (ll)ceil(d / (double)q) * q;
        return 0;
    }
    
    // q > p
    if (p > q)swap(p, q);
    ll ans = min((ll)ceil(d / (double)p) * p, (ll)ceil(d / (double)q) * q);
    ll k = (ll)ceil(d / (double)p);  //p  3 21
    ll m = (ll)ceil(d / (double)q); // q  2 26
    ll b = 0;

    for (ll i = 0; i <= 100000; i++) {
        ans = min(i * q + max((ll)0,(ll)(ceil((d - i * q) / (double)p)*p) ), ans);
        if (ans == d)
            break;
    }

    cout << ans;


    return 0;
}