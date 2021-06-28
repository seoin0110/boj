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
    vector<ll>v(n+1);
    for (ll i = 1; i <= n;i++) {
        cin >> v[i];
    }
    deque<ll>dq;
    for (ll i = n; i > 0; i--) {
        if (v[i] == 1) {
            dq.push_front(n-i+1);
        }
        else if (v[i] == 2) {
            ll tmp = dq.front();
            dq.pop_front();
            dq.push_front(n-i+1);
            dq.push_front(tmp);
        }
        else {
            dq.push_back(n-i+1);
        }
    }
    while (!dq.empty()) {
        cout << dq.front() << ' ';
        dq.pop_front();
    }
    return 0;
}
