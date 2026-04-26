#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>

using namespace std;
using ll = long long;

const ll n_ = 1000050, inf = 1e18;
vector<ll>v;
ll A[n_], tree[n_ * 4 + 100], lazy[n_ * 4 + 100], n, m, a, b, c, d, x, y, k;

ll init(ll node, ll start, ll end) {
   if (start == end)return tree[node] = v[start];
   ll mid = (start + end) / 2;
   return tree[node] = init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end);
}

void update_lazy(ll node, ll start, ll end) {
   if (!lazy[node])return;
   tree[node] += (end - start + 1) * lazy[node];
   if (start != end) {
      lazy[node * 2] += lazy[node];
      lazy[node * 2 + 1] += lazy[node];
   }
   lazy[node] = 0;
}

void update(ll node, ll s, ll e, ll l, ll r, ll val) {
   //s 부터 e까지의 범위에서 l 부터 r까지 업뎃할꺼임 
   update_lazy(node, s, e);
   if (l > e || r < s)return;
   if (l <= s && e <= r) {
      tree[node] += (e - s + 1) * val;
      if (s != e) {
         lazy[node * 2] += val;
         lazy[node * 2 + 1] += val;
      }
      return;
   }
   ll mid = (s + e) / 2;
   update(node * 2, s, mid, l, r, val);
   update(node * 2 + 1, mid + 1, e, l, r, val);
   tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

ll f(ll node, ll s, ll e, ll l, ll r) {
   update_lazy(node, s, e);
   if (l > e || r < s)return 0;
   if (l <= s && e <= r)return tree[node];
   ll mid = (s + e) / 2;
   return f(node * 2, s, mid, l, r) + f(node * 2 + 1, mid + 1, e, l, r);
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   cin >> n;
   for (int i = 0; i < n; i++)cin >> A[i];
   for (int i = 0; i < n; i++) {
      c = (!i) ? 0 : A[i - 1];
      v.push_back(A[i] - c);
   }

   init(1, 0, n - 1);
   cin >> m;
   while (m--) {
      cin >> a;
      if (a == 1) {
         cin >> b >> c;
         update(1, 0, n - 1, b - 1, c - 1, 1);
         update(1, 0, n - 1, c, c, -(c - b + 1));
      }
      else {
         cin >> b;
         cout << f(1, 0, n - 1, 0, b - 1) << '\n';
      }
   }
}