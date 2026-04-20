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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    cout << ((n - 1) * ((n - 2) * 2 + 1) + n - 1) / 2 << '\n';
    for (ll i = 2; i <= n; i++) {
        cout << i << ' ' << 1 <<'\n';
    }
    return 0;
}
