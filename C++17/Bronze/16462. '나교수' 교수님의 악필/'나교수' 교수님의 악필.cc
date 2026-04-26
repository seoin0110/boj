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
#define inf 1000000007

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll n;
    ll avg = 0;
    cin >> n;
    vector<string>s(n);
    for (ll i = 0;i < n;i++) {
        ll k = 0;
        cin >> s[i];
        for (ll j = 0; j < s[i].size();j++) {
            k *= 10;
            if (s[i][j] == '0' || s[i][j] == '6')
                s[i][j] = '9';
            k += s[i][j] - '0';
        }
        if (k >= 100)
            k = 100;
        avg += k;

    }

    cout << round(double(avg) / double(n)) << '\n';


    
    return 0;

}

