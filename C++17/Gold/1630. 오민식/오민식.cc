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
#define inf 987654321

ll check[1000001] = { false, };
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll sum = 1;
    vector<ll>v;
    for (ll i = 2; i<= n;i++) {
        if (check[i])
            continue;
        else
        {
            check[i] = true;
            v.push_back(i);
        }
        for (ll j = 1;;j++) {
            if (j * i > n)break;
            if ( j * i <= n && !check[j * i])
                check[j * i] = true;
        }


    }

    for (ll i = 0; i < v.size();i++) {
        ll j = v[i];
        while (j*v[i] <= n) {
            j *= v[i];
        }
        sum *= j;
        sum %= inf;
    }
   

    cout << sum << '\n';
    return 0;
}