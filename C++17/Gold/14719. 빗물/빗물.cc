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
ll vv[501][501] = { 0, };
int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll h, w;
    cin >> h >> w;

    ll sum = 0;
    ll ma = 0;
    ll high = 0;
    vector<ll>v(w);
    for (ll i = 0; i < w;i++) {
        cin >> v[i];
        for (ll j = 0; j < v[i];j++) {
            vv[i][j] = 1;
        }
    }

    for (ll i = 0; i < h;i++) {
        ll check = 0;
        ma = 0;
        for (ll j = 0; j < w;j++) {
            if (vv[j][i] == 1 && check == 0)
                check = 1;
            else if (check == 1 && vv[j][i] == 0)
                ma++;
            else if (check == 1 && vv[j][i] == 1) {
                sum += ma;
                ma = 0;
            }

        }
    }

    cout << sum << '\n';


    return 0;

}

