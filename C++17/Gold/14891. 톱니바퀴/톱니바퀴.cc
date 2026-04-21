#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include <random>
#include<functional>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s[4];
    ll ans = 0;
    ll u_idx[4] = {0,0,0,0};
    ll state[4] = { 0,0,0,0 };
    for (ll i = 0; i < 4; i++) {
        cin >> s[i];
    }
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        state[a - 1] = b;
        ll t_s = b;
        if (a < 4) {
            for (ll j = a; j < 4; j++) {
                if ((s[j - 1][(u_idx[j - 1] + 2) % 8]!=s[j][(u_idx[j] + 6) % 8])&&(t_s!=0)) {
                    state[j] = -t_s;
                    t_s = -t_s;
                }
                else {
                    t_s = 0;
                }
            }
        }
        t_s = b;
        if (a > 1) {
            for (ll j = a - 2; j >= 0; j--) {
                if ((s[j + 1][(u_idx[j + 1] + 6) % 8] != s[j][(u_idx[j] + 2) % 8]) && (t_s != 0)) {
                    state[j] = -t_s;
                    t_s = -t_s;
                }
                else {
                    t_s = 0;
                }
            }
        }
        for (ll i = 0; i < 4; i++) {
            if (state[i] < 0) {
                u_idx[i] = (u_idx[i] + 1) % 8;
            }
            else if(state[i]>0) {
                u_idx[i] = (u_idx[i] + 7) % 8;
            }
            state[i] = 0;
        }
    }





    ll j = 1;
    for (ll i = 0; i < 4; i++) {
        ans += (s[i][u_idx[i]]-'0') * j;
        j *= 2;
    }

    cout << ans;

    return 0;
}
