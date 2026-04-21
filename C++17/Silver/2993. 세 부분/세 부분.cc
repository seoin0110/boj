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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string ans = s;
    for (ll i = 0; i < s.size();i++) {
        for (ll j = i + 1; j < s.size();j++) {
            for (ll k = j + 1; k < s.size();k++) {
                reverse(s.begin() + i, s.begin() + j);
                reverse(s.begin() + j, s.begin() + k);
                reverse(s.begin() + k, s.end());
                if (ans > s)
                    ans = s;
                reverse(s.begin() + i, s.begin() + j);
                reverse(s.begin() + j, s.begin() + k);
                reverse(s.begin() + k, s.end());

            }
        }
    }

    cout << ans << '\n';
    return 0;
}