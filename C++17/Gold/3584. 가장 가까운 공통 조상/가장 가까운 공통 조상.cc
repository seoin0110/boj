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
ll p[10000];
ll check_a[10000];
ll check_b[10000];
int main() {
   cin.tie(0), cout.tie(0);
   ios_base::sync_with_stdio(0);
   ll t;
   cin >> t;
   while (t--) {
      ll n;
      cin >> n;
      for (ll i = 0; i < n; i++) {
         p[i] = -1;
         check_a[i] = 0;
         check_b[i] = 0;
      }
      for (ll i = 0; i < n-1; i++) {
         ll a, b;
         cin >> a >> b;
         p[b-1] = a-1;
      }
      ll a, b;
      cin >> a >> b;
      a -= 1;
      b -= 1;
      if (a == b) {
         cout << a + 1 << '\n';
         continue;
      }
      while (1) {
         check_a[a] = 1;
         check_b[b] = 1;
         if (check_a[b] == 1) {
            cout << b+1 << '\n';
            break;
         }
         else if (check_b[a] == 1) {
            cout << a+1 << "\n";
            break;
         }
         else {
            if (p[a] != -1) 
               a = p[a];
            if(p[b] != -1)
               b = p[b];
         }
      }
   }
   return 0;
}