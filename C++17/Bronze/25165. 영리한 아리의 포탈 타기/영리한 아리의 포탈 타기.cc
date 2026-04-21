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
    
    ll n, m;
    cin >> n >> m;
    ll ac, d;
    cin >> ac >> d;
    ll mx, my;
    cin >> my >> mx;
    if (my == n && mx == m || my == 0 && mx == ac) {
        cout << "NO...";
    }
    else if (my > 1 && my < n) {
        cout << "NO...";
    }
    else if (my == 0 && mx < ac && d == 0) {
        cout << "NO...";
    }
    else if (my == 0 && mx > ac && d == 1) {
        cout << "NO...";
    }
    else if (my == n && n % 2 == 0 && d == 0) {
        cout << "NO...";
    }
    else if (my == n && n % 2 == 1 && d == 1) {
        cout << "NO...";
    }
    else {
        cout << "YES!";
    }

    return 0;
}