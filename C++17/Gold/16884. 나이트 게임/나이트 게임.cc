#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cstring>
#define ll long long
using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll n;
    cin >> n;
    while (n--) {
        ll a;
        cin >> a;

        if (a % 2) {
            cout << "koosaga\n";
        }
        else {
            cout << "cubelover\n";
        }

    }
    return 0;
}