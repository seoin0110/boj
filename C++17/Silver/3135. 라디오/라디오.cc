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
#include <cassert>
using ll = long long;
using namespace std;
ll inf = 1000000007;


int main()
{
   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   ll a, b,n;
   cin >> a >> b;
   cin >> n;
   ll m = abs(b-a);
   for (ll i = 0; i < n; i++) {
      ll tmp;
      cin >> tmp;
      m = min(m, abs(tmp - b) + 1);
   }
   cout << m;
   return 0;
}