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
ll k[5][5];
ll ans = 0;
ll count = 0;
set<ll>ss;
void  bfs(ll i, ll j, ll l, ll a) {
    if (l == 5) {
        if(ss.find(a) == ss.end())
            ss.insert(a);
        return;
    }
    if( i+1 <5)
        bfs(i + 1, j, l + 1, a*10 + k[i + 1][j]);
    if( j+1<5)
        bfs(i, j+1, l + 1, a*10 + k[i][j+1]);
    if(i-1 >=0)
        bfs(i -1, j, l + 1, a*10 + k[i -1][j]);
    if(j-1>=0)
        bfs(i, j-1, l + 1, a*10 + k[i][j-1]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    for (ll i = 0; i < 5; i++) {
        for (ll j = 0; j < 5; j++) {
            cin >> k[i][j];
        }
    }
    for (ll i = 0; i < 5; i++) {
        for (ll j = 0; j < 5; j++) {
            bfs(i, j, 0, k[i][j]);
        }
    }
    cout << ss.size() << '\n';
}