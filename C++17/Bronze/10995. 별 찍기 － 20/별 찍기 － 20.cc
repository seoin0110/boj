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
    for (ll i = 1;i <= n;i++) {
        if (i % 2 == 0)
            cout << ' ';
        for (ll j = 1; j <= n;j++) {
            cout << "* ";
        }
        cout << '\n';
    }
    return 0;

}