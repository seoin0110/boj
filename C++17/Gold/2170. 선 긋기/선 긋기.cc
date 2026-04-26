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

/*ll par[1000000001];

ll find(ll a) {
    if (a < 0)
        return par[a];
    return par[a] = find(par[a]);
}

*/

bool cmp(pair<ll, ll> a, pair<ll, ll>b) {
    if (a.first > b.first)
        return false;
    else if (a.first == b.first)
        if (a.second > b.second)
            return false;

    return true;
}

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    ll n;
    cin >> n;
    vector<pair<ll, ll> >v(n);
    for (ll i = 0; i < n;i++) {
        cin >> v[i].first >> v[i].second;
        if (v[i].first > v[i].second)
            swap(v[i].first, v[i].second);
    }

    sort(v.begin(), v.end(), cmp);
    ll sum = 0;
    ll begin = v[0].first;
    ll end = v[0].second;
    for (ll i = 1; i < v.size();i++) {
        if (end >= v[i].first) {
            end = max(end, v[i].second);
        }
        else
        {
            sum += end - begin;
            begin = v[i].first;
            end = v[i].second;
        }
    }
    sum += end - begin;
    cout << sum << '\n';
    

    return 0;
}

