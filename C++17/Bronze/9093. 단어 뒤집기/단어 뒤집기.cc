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
    ll n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string s;
        getline(cin, s);
        ll start = 0;
        for (ll i = 0; i < s.size();i++) {
            if (s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i+1;
            }
        }
        reverse(s.begin() + start, s.end());
        cout << s << '\n';
    }




    return 0;

}