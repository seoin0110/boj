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
#define inf 100000009

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    ll n;
    cin >> n;
    while (n--) {
        ll a;
        cin >> a;
        string s[2];
        cin >> s[0] >> s[1];
        ll w1 = 0, w2 = 0;
        ll d = 0;
        for (ll i = 0; i < a;i++) {
            if (s[0][i] == 'W')
                w1++;
            if (s[1][i] == 'W')
                w2++;
            if (s[0][i] != s[1][i])
                d++;
        }
        cout << (d - abs(w1 - w2)) / 2 + abs(w1 - w2)<<'\n';

    }
    return 0;
}