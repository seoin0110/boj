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
    ll n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.length() >= 6 && s.length() <= 9) {
            cout << "yes\n";
        }
        else
            cout << "no\n";
    }
    return 0;
}
