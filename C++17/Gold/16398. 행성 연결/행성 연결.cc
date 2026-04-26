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
#include <cstring>
#define ll long long
using namespace std;

ll a[1001][1001];
ll check[1001];
ll par[1001];

ll sum = 0;

ll find(ll b) {
    if (par[b] < 0)
        return b;
    else
        return par[b] = find(par[b]);
}
bool uni(ll b, ll c){
    b = find(b);
    c = find(c);
    if (b == c) {
        return false;
    }
    else {
        par[b] = c;
        return true;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 0; i < 1001; i++)
        par[i] = -1;
    priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, greater<> >pq;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            ll aa;
            cin >> aa;
            if (i > j) {
                pq.push({ aa,{i,j} });
            }
        }
    }
    ll cnt = 0;
    while (!pq.empty()) {
        if (cnt == n - 1) {
            break;
        }
        pair<ll, pair<ll, ll> > pp = pq.top();
        pq.pop();
        if (uni(pp.second.first, pp.second.second)) {
            cnt++;
            sum += pp.first;
        }
    }
    cout << sum;


}