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
int pArr[5] = { 0, };
bool check[5] = { false, };
ll perm[120][5];
ll perm_ans[120][5];
ll tmp = 0;
map<string, ll> mp;
void permutation(int depth) {
    if (depth == 5) {
        string s = "";
        for (ll i = 0; i < 5; i++) {
            perm[tmp][i] = pArr[i];
            s += (char)(pArr[i]+ '0');
            mp.insert(make_pair(s, tmp));
        }
        tmp++;
        return;
    }

    for (int i = 0; i < 5; i++) {
        if (!check[i]) {
            check[i] = true;
            pArr[depth] = i;
            permutation(depth + 1);
            check[i] = false;
        }
    }
}

ll inf = 1000000007;
ll par[50001];
ll find(ll a) {
    if (par[a] == -1) {
        return a;
    }
    else
        return par[a] = find(par[a]);
}

bool merge(ll a, ll b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        par[b] = a;
        return true;
    }
    return false;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m, q;
    cin >> n >> m >> q;
    vector<pair<ll, ll> > v[5];
    
    for (ll i = 0; i < m; i++) {
        ll a, b;
        char c;
        cin >> a >> b >> c;
        v[c - 'A'].push_back({ a, b });
    }
    permutation(0);
    for (ll i = 0; i < 120; i++) {
        pair<ll, ll> arr[5];
        for (ll j = 0; j < 5; j++) {
            arr[j].first = perm[i][j];
            arr[j].second = j;
        }
        sort(arr, arr + 5);
        ll cnt = 0;
        for (ll j = 1; j <= n; j++)
            par[j] = -1;
        for (ll j = 0; j < 5; j++) {
            if (cnt == n - 1)
                break;
            for (auto x : v[arr[j].second]) {
                if (cnt == n - 1)
                    break;
                if (merge(x.first, x.second)) {
                    cnt++;
                    perm_ans[i][j] += 1;
                }
            }
        }
    }
    for (ll i = 0; i < q; i++) {
        pair<ll,ll> arr[5];
        for (ll j = 0; j < 5; j++) {
            cin >> arr[j].first;
            arr[j].second = j;
        }
        sort(arr, arr + 5);
        string s = "";
        char cc[5];
        for (ll j = 0; j < 5; j++) {
            cc[arr[j].second] = (char)(j + '0');
        }
        for (ll j = 0; j < 5; j++) {
            s += cc[j];
        }
        ll ans = 0;
        ll perm_idx = mp.find(s)->second;
        for (ll j = 0; j < 5; j++) {
            ans += perm_ans[perm_idx][j] * arr[j].first;
        }
        
        cout << ans << '\n';
    }
    return 0;
}