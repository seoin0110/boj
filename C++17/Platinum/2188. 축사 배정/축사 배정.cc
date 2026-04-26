#include<bits/stdc++.h>
using namespace std;
const int n_ = 444;
int cache[n_], n, m, ans, source, sink;

struct edge {
   int to, cap, flow;
   edge* rev;

   edge(int to, int cap) :to(to), cap(cap), flow(0) {};

   int rest(){ return cap - flow; }
   void push(int f) {
      flow += f;
      rev->flow -= f;
   }
};
vector<edge*>v[n_];

void add_edge(int from, int to, int c) {
   edge* e1 = new edge(to, c), *e2 = new edge(from, 0);
   e1->rev = e2;
   e2->rev = e1;
   v[from].push_back(e1);
   v[to].push_back(e2);
}
int Edmond_Karp(int source, int sink) {
   int max_flow = 0;
   while (1) {
      queue<int>q;
      memset(cache, -1, sizeof(cache));
      edge* path[n_];
      cache[source] = source;
      q.push(source);
      while (q.size()) {
         int cur = q.front();
         q.pop();
         for (auto e : v[cur]) {
            auto nxt = e->to;
            if (cache[nxt] == -1 && e->rest() > 0) {
               cache[nxt] = cur;
               path[nxt] = e;
               q.push(nxt);
               if (nxt == sink)break;
            }
         }
      }
      if (cache[sink] == -1)break;
      int min_cap = 1e9;
      for (int i = sink; i != source; i = cache[i])min_cap = min(min_cap, path[i]->rest());
      max_flow += min_cap;
      for (int i = sink; i != source; i = cache[i])path[i]->push(min_cap);
   }
   return max_flow;
}
int new_face[n_], a, b, x;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   cin >> n >> m;
   for (int i = 1; i <= n; i++) {
      int a, b;
      cin >> a;
      for (int j = 0; j < a; j++) {
         cin >> b;
         add_edge(i, b + n, 1);
      }
   }
   for (int i = 1; i <= n; i++)add_edge(0, i, 1);
   for (int i = 1; i <= m; i++)add_edge(i + n, n + m + 1, 1);
   cout << Edmond_Karp(0, n + m + 1) << '\n';
}