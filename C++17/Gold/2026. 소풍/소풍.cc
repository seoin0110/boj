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
using namespace std;

int k, n, f, a, b;
bool fr[901][901] = { false }, ended = false;
int ans[63] = { 0 };
void func(int now,int goal) {
   if (ended)return;
   if (now == goal + 1) {
      for (int i = 1; i <= goal; i++) {
         cout << ans[i] << '\n';
      }
      ended = true;
   }
   for (int i = ans[now - 1] + 1; i <= n; i++) {
      bool ch = true;
      for (int j = 1; j < now; j++)
         if(!fr[i][ans[j]]){
            ch = false;
            break;
      }
      if (ch) {
         ans[now] = i;
         func(now + 1, goal);
      }
   }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   cin >> k >> n >> f;
   while (f--) {
      cin >> a >> b;
      fr[a][b] = true;
      fr[b][a] = true;
   }
   func(1, k);
   if (!ended)
      cout << "-1";

}