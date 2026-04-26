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

ll par1[500001];

ll find1(ll a) {
    if (par1[a] < 0)
        return a;
    return par1[a] = find1(par1[a]);
}

bool uni(ll a, ll b) {
    ll x = find1(a);
    ll y = find1(b);
    if (x == y)
        return false;
    par1[x] = y;
    return true;

}


int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll n,m;
    
    cin >> n >> m;
    ll ans = 0;
    ll check = 0;
    for (ll i = 0; i < 500001;i++)
    {
        par1[i] = -1;
    }
    for (ll i = 0; i < m;i++) {
        ll a, b;
        cin >> a >> b;
        if (!uni(a, b) && !check){
            ans = i + 1;
            check = 1;
        }
    }

    cout << ans << '\n';

    return 0;

}

