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
    
    ll s, m;
    cin >> s >> m;
    if (s <= 1023) {
        cout << "No thanks";
    }
    else if (s <= 1023 + m && (m & (s-1023)) == (s - 1023)) {
        cout << "Thanks";
    }
    else
        cout << "Impossible";

    return 0;
}