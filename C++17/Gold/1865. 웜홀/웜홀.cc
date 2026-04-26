#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<queue>
#include<climits>
#include<stack>
#include<deque>
#include<utility>

using namespace std;
using pii = pair<int, int>;
using ll = long long;
ll inf = 1000000000;
ll dist[510], t, n, m, a, b, c, d, w;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   cin >> t;
   while (t--) {
      cin >> n >> m >> w;
      fill(dist, dist + n, inf);
      vector < pair < ll, ll> > v[510];
      while (m--) {
         cin >> a >> b >> c;
         v[a].push_back({ b,c });
         v[b].push_back({ a,c });
      }
      while (w--) {
         cin >> a >> b >> c;
         v[a].push_back({ b,-c });
      }
      for(int i=1;i<n;i++)
         for (int j = 1; j <= n; j++) {
            if (dist[j] == inf)continue;
            for (auto nxt : v[j])
            dist[nxt.first] = min(dist[nxt.first], dist[j] + nxt.second);
         }

      bool minus_cycle = false;
      for (int i = 1; i <= n; i++) {
         for (auto nxt : v[i]) {
            for (auto nxt : v[i]) {
               if (dist[nxt.first] > dist[i] + nxt.second)
                  minus_cycle = true;
            }
         }
      }
      if (minus_cycle==true)
          cout << "YES\n";
      else
          cout << "NO\n";
   }
}