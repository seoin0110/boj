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
    ll w, h, l;
    cin >> w >> h >> l;
    ll sum = 0;
    ll cnt = 0;
    for (ll i = 1; i < l; i++) {
        cnt += (ll)sqrt(l * l - i * i);
    }
    sum += cnt * 3 + l * 2;
    if (l - w > 0) {
        cnt = 0;
        for (ll i = 1; i <= min(l - w, h); i++) {
            cnt += (ll)sqrt((l - w) * (l - w) - i * i);
        }
        sum += cnt + l - w;
    }
    if (l - h > 0) {
        cnt = 0;
        for (ll i = 1; i <= l - h; i++) {
            cnt += (ll)sqrt((l - h) * (l - h) - i * i);
        }
        sum += cnt + l - h;
    }

    if (l - w - h > 0) {
        cnt = 0;
        for (ll i = 1; i < l - w - h; i++) {
            if((ll)sqrt((l - w) * (l - w) - (h + i) * (h + i)) - ((ll)sqrt((l - h) * (l - h) - i * i) - w)>0)
                cnt += (ll)sqrt((l - w) * (l - w) - (h + i) * (h + i)) - ((ll)sqrt((l - h) * (l - h) - i * i) - w);
        }
        sum += cnt;

    }

    cout << sum;

}