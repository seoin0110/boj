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
   #include<unordered_map>
   #include<list>

   #define all(v) v.begin(),v.end()
   using namespace std;
   using ll = long long;
   using P = pair<ll, ll>;
   using PP = pair<ll, P>;
   const ll n_ = 1e5 + 100, inf = 1e18, mod = 1e9 + 7, sqrtN = 333, p = 27;
   ll n, m, k, tc = 1, a, b, c, d, sum, x, y, z, ans;

   int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0), cout.tie(0);
      cin >> n;
      vector<P>A(n), ANS;
      for (int i = 0; i < n; i++)cin >> A[i].first, A[i].second = i;
      sort(all(A));
      if (A[0].first == 0) {
         cout << "BRAK";
         return 0;
      }
      a = 0, b = 0;
      for (int i = 0; i < n - 2; i++) {
         if (A[a].first == 1) {
            if (A[b].first > 1) {
               ANS.push_back({ A[a].second + 1,A[b].second + 1 });
               A[b].first--;
            }
            else {
               while (b < n - 1 && A[b].first == 1)b++;
               ANS.push_back({ A[a].second + 1,A[b].second + 1 });
               A[b].first--;
            }
            a++;
         }
         else {
            cout << "BRAK";
            return 0;
         }
      }
      if (A[n - 2].first != 1 || A[n - 1].first != 1) {
         cout << "BRAK";
         return 0;
      }
      ANS.push_back({ A[n - 2].second + 1,A[n - 1].second + 1 });
      for (auto nxt : ANS)cout << nxt.first << ' ' << nxt.second << '\n';
      return 0;
   }