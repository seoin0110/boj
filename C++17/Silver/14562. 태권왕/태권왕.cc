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
#define inf 100000009

typedef struct {
    ll a;
    ll b;
    ll l;
    
}s;

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    ll n;
    cin >> n;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        queue<s >q;
        ll ans;
        s tmp;
        tmp.a = a;
        tmp.b = b;
        tmp.l = 0;
        q.push(tmp);
        while (!q.empty()) {
            s top = q.front();
            s tmp1;
            s tmp2;
            q.pop();
            tmp1.a = top.a * 2;
            tmp1.b = top.b + 3;
            tmp1.l = top.l + 1;
            tmp2.a = top.a + 1;
            tmp2.b = top.b;
            tmp2.l = top.l + 1;
            if (tmp1.a == tmp1.b) {
                ans = tmp1.l;
                break;
            }
            if (tmp2.a == tmp2.b) {
                ans = tmp2.l;
                break;
            }
            if(tmp1.a<tmp1.b)
                q.push(tmp1);
            if(tmp2.a < tmp2.b)
                q.push(tmp2);
        }
        while (!q.empty()) {
            q.pop();
        }
        cout << ans << '\n';
    }
    return 0;
}