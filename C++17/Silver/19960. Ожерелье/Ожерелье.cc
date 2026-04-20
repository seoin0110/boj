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
ll chk[501];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    if (n <= 5)
        cout << -1;
    else {
        if (n % 2 == 0) {
            for (ll i = 0; i < n / 2-1; i++) {
                cout << "0 ";
            }
            cout << "1 0 ";
            for (ll i = 0; i < n / 2 - 1; i++) {
                cout << "1 ";
            }
        }
        else {
            for (ll i = 0; i < n / 2; i++) {
                cout << "1 ";
            }
            cout << "0 1 ";
            for (ll i = 0; i < n / 2 - 1; i++) {
                cout << "0 ";
            }
        }
    }
        
    return 0;
}
