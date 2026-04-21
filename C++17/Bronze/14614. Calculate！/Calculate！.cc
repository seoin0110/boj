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
    ll a, b ;
    string s;
    cin >> a >>b >> s;
    if ((s[s.size()-1]-'0') % 2) {
        a = a ^ b;
    }
    cout << a;
    return 0;

}