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
    
    queue<ll>q;
    ll n;
    cin >> n;
    ll cnt = 0;
    for (ll i = 1; i <= n; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        if (cnt % 2 == 0) {
            q.pop();
        }
        else {
            q.push(q.front());
            q.pop();
        }
        cnt++;
    }
    cout << q.front();
    return 0;
}