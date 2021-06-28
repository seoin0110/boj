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
#define inf 100000009

ll failure[1000001];

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    string s;
    string p;
    cin >> s;
    cin >> p;
    for (ll i = 0; i < 1000001;i++) {
        failure[i] = -1;
    }
    failure[0] = -1;
    for (ll i = 1; i < p.size();i++) {
        ll k = failure[i - 1];
        while (p[i] != p[k + 1] && k >= 0)k = failure[k];
        if (p[k + 1] == p[i])
            failure[i] = k + 1;
        else {
            failure[i] = -1;
        }
    }
    ll i = 0;
    ll j = 0;
    ll check = 0;
    while (i < s.size()) {
        if (s[i] == p[j])
        {
            i++;
            j++;
        }
        else if (j == 0) {
            i++;
        }
        else
        {
            j = failure[j - 1]+1;
        }
        if (j >= p.size()) {
            check = 1;
            break;
        }
    }
    if (check)
        cout << "1\n";
    else
        cout << "0\n";

    return 0;
}
