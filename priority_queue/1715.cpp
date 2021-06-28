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
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);


    ll n;
    cin >> n;
    vector<ll>v(n);
    priority_queue<ll,vector<ll>,greater<> >pq;
    for (ll i = 0; i < n;i++) {
        ll a;
        cin >> a;
        pq.push(a);
    }
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    ll sum = 0;
    while (!pq.empty()) {
        if (pq.size() == 1)
        {
            sum += pq.top();
            break;
        }
        else {
            ll a = pq.top();
            pq.pop();
            ll b = pq.top();
            pq.pop();
            sum += a + b;
            if (pq.empty())
                break;
            pq.push(a + b);
        }
    }

    cout << sum << '\n';

    return 0;
}
