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

bool cmp(pair<ll,ll> a, pair<ll, ll> b){
    if (a.first*a.first + a.second*a.second != b.first*b.first + b.second*b.second){
        return a.first*a.first + a.second*a.second > b.first*b.first + b.second*b.second;
    }
    else{
        return a.first > b.first;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    for(ll T = 1; T <= t;T++){
        cout << "Case #" << T << ": ";
        ll n;
        cin >> n;
        vector<ll>a(n);
        vector<ll>b(n);
        for(ll i = 0;i <n;i++){
            cin >> a[i];
        }
        for(ll i = 0;i <n;i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end());
        ll ans =0;
        for(ll i = 0;i <n;i++){
            ans += a[i] * b[i];
        }
        cout << ans <<'\n';
    }
}