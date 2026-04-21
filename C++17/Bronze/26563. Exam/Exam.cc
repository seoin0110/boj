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
#include <cassert>
using ll = long long;
using namespace std;
ll inf = 1000000007;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n,m;
    cin >> n ;
    
    while (n--) {
        cin >> m;
        
        string s1;
        string s2;
        cin >> s1 >> s2;
        ll cnt = 0;
        for (ll i = 0; i < s1.length(); i++) {
            if (s1[i] == s2[i])
                cnt++;
        }
        cout << min(cnt, m) + min(s1.length() - cnt, s1.length() - m) << '\n';
    }
    return 0;
}