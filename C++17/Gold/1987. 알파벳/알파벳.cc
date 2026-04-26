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
#define ll long long
using namespace std;
string k[20];
ll ans = 1;
ll check[20][20];
ll n,m;
ll ch[26];
queue<pair<pair<ll, ll>, ll > >q;
void  bfs(ll i, ll j, ll l) {
    if (i + 1 < n && check[i + 1][j] == 0 && ch[k[i+1][j]-'A']==0) {
        check[i + 1][j] = 1;
        ch[k[i + 1][j] - 'A'] = 1;
        ans = max(ans, l + 1);
        bfs(i + 1, j, l + 1);
        check[i + 1][j] = 0;
        ch[k[i + 1][j] - 'A'] = 0;
    }
    if (j + 1 < m && check[i][j + 1] == 0 && ch[k[i][j+1] - 'A'] == 0) {
        check[i][j+1] = 1;
        ch[k[i][j + 1] - 'A'] = 1;
        ans = max(ans, l + 1);
        bfs(i, j + 1, l + 1);
        check[i][j + 1] = 0;
        ch[k[i][j + 1] - 'A'] = 0;
    }
    if (i - 1 >= 0 && check[i - 1][j] == 0 && ch[k[i-1][j] - 'A'] == 0) {
        check[i - 1][j] = 1;
        ch[k[i - 1][j] - 'A'] = 1;
        ans = max(ans, l + 1);
        bfs(i - 1, j, l + 1);
        check[i - 1][j] = 0;
        ch[k[i - 1][j] - 'A'] = 0;
    }
    if (j - 1 >= 0 && check[i][j - 1] == 0 && ch[k[i][j-1] - 'A'] == 0) {
        check[i][j-1] = 1;
        ch[k[i][j - 1] - 'A'] = 1;
        ans = max(ans, l + 1);
        bfs(i, j - 1, l + 1);
        check[i][j-1] = 0;
        ch[k[i][j - 1] - 'A'] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> k[i];
    }
    ch[k[0][0] - 'A'] = 1;
    check[0][0] = 1;
    bfs(0, 0, 1);

    cout << ans << '\n';
}