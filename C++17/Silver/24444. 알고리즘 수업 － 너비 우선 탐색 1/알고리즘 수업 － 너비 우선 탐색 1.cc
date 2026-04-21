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
ll chk[100001];
vector<ll>arr[100001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    ll r;
    cin >> r;
    for (ll i = 0; i < k; i++) {
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    queue<ll>q;
    q.push(r);
    ll cnt = 2;
    chk[r] = 1;
    while (!q.empty()) {
        ll tmp = q.front();
        q.pop();
        sort(arr[tmp].begin(), arr[tmp].end());

        for (auto i: arr[tmp]) {
            if (chk[i] == 0) {
                q.push(i);
                chk[i] = cnt;
                cnt++;
            }
        }
    }

    for (ll i = 1; i <= n; i++) {
        cout << chk[i] << '\n';
    }
    return 0;
}