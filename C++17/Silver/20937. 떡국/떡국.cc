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
ll v[50001];
int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll m;
    cin >> m;
    ll ans = 1;
    for (ll i = 0; i < m;i++) {
        ll a;
        cin >> a;
        v[a]++;
        if (v[a] > ans)
            ans = v[a];
    }
    

    cout << ans << '\n';
    return 0;

}

