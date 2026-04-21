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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double ans = 0;
    string s;
    ll cnt = 0;
    cin >> s;
    for (ll i = 0; i < s.size();i++) {
        if (s[i] == '1' && i < s.size() - 1 && s[i + 1] == '0')
        {
            cnt++;
            ans += 10;
            i++;
        }
        else
        {
            cnt++;
            ans += s[i] - '0';
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << ans / (double)cnt << '\n';
    return 0;

}