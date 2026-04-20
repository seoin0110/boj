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
    ll n, m;
    cin >> n >> m;
    for(ll i = 1; i <= m;i++){
        cout << "0 " << i <<'\n';
    }
    for(ll i = m+1; i < n;i++){
        cout << i - 1 << ' ' << i <<'\n';
    }
}