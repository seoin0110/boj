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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    

    priority_queue<ll>pq;
    ll n,h,t;
    cin >> n>>h>>t;
    for (ll i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        pq.push(tmp);
    }
    ll cnt = 0;
    while (t--&&!pq.empty()) {
        ll tmp = pq.top();
        pq.pop();
        if (tmp < h) {
            pq.push(tmp);
            break;
        }
        else
        {
            cnt++;
            if (tmp == 1)
                pq.push(tmp);
            else
                pq.push(tmp / 2);
        }
        
    }

    if (pq.top() < h) {
        cout << "YES\n"<<cnt << '\n';
    }
    else
        cout <<"NO\n" << pq.top() << '\n';
    return 0;
}