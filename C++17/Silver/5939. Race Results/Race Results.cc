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

struct time_{
    ll h, m, s;
};

bool cmp(time_ a, time_ b){
    return a.h * 3600 + a.m*60 + a.s < b.h * 3600 + b.m*60 + b.s;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<time_>v(n);
    for(ll i = 0; i < n;i++){
        cin >> v[i].h >> v[i].m >> v[i].s;
    }
    sort(v.begin(),v.end(), cmp);
    for(ll i = 0; i < n;i++){
        cout << v[i].h <<' ' << v[i].m <<' '<< v[i].s<<"\n";
    }
}