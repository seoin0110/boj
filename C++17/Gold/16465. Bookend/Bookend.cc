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
/*
typedef struct {
    bool wall = false;
    bool a = false;
    bool b = false;
    bool c = false;
}st;

st lo[101][101];

using ll = long long;
using namespace std;
#define inf 1000000007
int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    ll r, c;
    cin >> r >> c;
    vector<string>s(r+1);
    for (ll i = 1; i <= r;i++) {
        cin >> s[i];
        for (ll j = 1; j <= c;j++)
            lo[i][j].wall = (bool)s[i][j - 1];
    }
    ll a, b;

    queue<pair<pair<ll,ll>,pair<ll,ll> > >q;
    cin >> a >> b;
    lo[a][b].a = true;
    q.push({ {a,b }, {1,0 }});
    cin >> a >> b;
    lo[a][b].b = true;
    q.push({ {a,b }, {2,0 } });
    cin >> a >> b;
    lo[a][b].c = true;
    q.push({ {a,b }, {3,0 } });
    bool ans = false;
    ll ans_a;
    ll ans_b;
    while (!q.empty()) {
        if (lo[q.front().first.first][q.front().first.second].a && lo[q.front().first.first][q.front().first.second].b && lo[q.front().first.first][q.front().first.second].c)
        {
            if (!ans_b)
                ans_a = q.front().second.second;
            ans_b++;
        }
        if (q.front().second.first == 1) {
            if (q.front().first.first + 1 <= r && !lo[q.front().first.first + 1][q.front().first.second].a) {
                lo[q.front().first.first + 1][q.front().first.second].a = true;
                q.push();
            }

        }



    }

    
    

    return 0;

}

*/


using ll = long long;
using namespace std;
#define inf 1000000007
int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);


    ll n, m, l;
    cin >> n >> m >> l;
    vector<ll>v(n);
    ll sum = 0;
    for (ll i = 0; i < n;i++) {
        cin >> v[i];
        sum += v[i];
    }
    if (sum > m)
    {
        cout << "-1\n";
    }
    else if (sum == m) {
        cout << "0\n";
    }
    else if (sum + l <= m)
        cout << "1\n";
    else {
        if (l > m)
        {
            cout << "-1\n";
        }
        else if (sum < l)
        {
            cout << "-1\n";
        }
        else
            cout << "1\n";
    }
    return 0;
}