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
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll> > pq;
    for(ll i = 0; i < n;i++){
        ll tmp;
        cin >> tmp;
        pq.push(tmp);
    }
    ll ans = 0;
    while(pq.size() > 1){
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();
        ans += a * b;
        pq.push(a+b);
    }
    cout << ans;
}