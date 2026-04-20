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
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            cout << (char)(s[i] - 32);
        }
        else {
            cout << (char)(s[i] + 32);
        }
    }
    return 0;
}
