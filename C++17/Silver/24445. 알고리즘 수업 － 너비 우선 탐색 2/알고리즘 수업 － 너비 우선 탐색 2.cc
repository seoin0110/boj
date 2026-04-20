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
ll chk[100001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    queue<ll>q;
    ll idx = 1;
    ll n,m,r;
    cin >> n >> m >> r;
    vector<ll>v[100001];
    for(ll i = 0; i < m;i++){
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    q.push(r);
    while(!q.empty()){
        ll a = q.front();
        q.pop();
        if(chk[a] != 0)
            continue;
        chk[a] = idx;
        idx++;
        sort(v[a].begin(),v[a].end(),greater<ll>());
        for(auto x: v[a]){
            if(chk[x] == 0)
                q.push(x);
        }
    }
    for(ll i = 1; i <=n;i++){
        cout << chk[i] << '\n';
    }
}