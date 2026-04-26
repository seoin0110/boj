#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;
#define inf 1000000007
int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll b, c, d;
    ll b_sum = 0;
    cin >> b >> c >> d;
    vector<ll>bb(b);
    vector<ll>cc(c);
    vector<ll>dd(d);
    for (ll i = 0; i < b;i++) {
        cin >> bb[i];
        b_sum += bb[i];
    }
    for (ll i = 0; i < c;i++) {
        cin >> cc[i];
        b_sum += cc[i];
    }
    for (ll i = 0; i < d;i++) {
        cin >> dd[i];
        b_sum += dd[i];
    }
    sort(bb.begin(), bb.end(), greater<>());
    sort(cc.begin(), cc.end(), greater<>());
    sort(dd.begin(), dd.end(), greater<>());
    ll s_sum = 0;
    for (ll i = 0; i < min({ b,c,d });i++) {
        s_sum += bb[i] + cc[i] + dd[i];
    }
    s_sum = s_sum / 100 * 90;
    for (ll i = min({ b,c,d });i < max({ b,c,d });i++)
    {
        if (i < b)
            s_sum += bb[i];
        if (i < c)
            s_sum += cc[i];
        if (i < d)
            s_sum += dd[i];
    }

    cout << b_sum << '\n';
    cout << s_sum << '\n';

    return 0;

}

