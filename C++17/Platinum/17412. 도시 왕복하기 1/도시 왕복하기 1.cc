#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
vector<int> v[401];
int n, m, a, b;
int cache[401], flow[401][401] = { 0 }, op_flow[401][401] = { 0 };
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);

   cin >> n >> m;
   for (int i = 0; i < m; i++) {
      cin >> a >> b;
      v[a].push_back(b);
      v[b].push_back(a);
      flow[a][b] = 1;
   }
   int ans = 0;
   while (1) {
   
      memset(cache, -1, sizeof(cache));
      cache[1] = 1;
      queue<int> q;
      q.push(1);
      while (!q.empty()) {
         int cur = q.front();
         q.pop();
         for (int nxt : v[cur])
            if (cache[nxt] == -1 && flow[cur][nxt] - op_flow[cur][nxt] > 0) {
               cache[nxt] = cur;
               q.push(nxt);
            }
         if (cache[2] != -1)break;
      }
      if (cache[2] == -1)
         break;
      ans++;
      for (int i = 2; i != 1; i = cache[i]) {
         int before = cache[i];
         op_flow[before][i]++;
         op_flow[i][before]--;
      }

   }
   cout << ans;


   return 0;
}