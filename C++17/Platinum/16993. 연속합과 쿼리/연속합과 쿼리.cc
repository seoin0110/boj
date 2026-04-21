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
using ll = long long;
using namespace std;
ll inf = -1000000007;
ll arr[1000000];
//ll seg[4000000];
//ll seg2[4000000];

struct node {
    ll total = 0; //전체 합
    ll left = 0; //가장 왼쪽 원소 포함
    ll right = 0; //가장 오른쪽 원소 포함
    ll both = 0; //최대 구간합
    node() {};
    node(ll i) : total(i), left(i), right(i), both(i) { }
};
node seg[400000];
node merge(node a, node b) {
    node tmp;
    tmp.total = a.total + b.total;
    tmp.left = max(a.left, a.total + b.left);
    tmp.right = max(b.right, b.total + a.right);
    tmp.both = max({ a.both, b.both, a.right + b.left });
    return tmp;
}
ll n;
node update(ll left, ll right, ll n) {
    if (left == right)
        return seg[n] = (arr[left], arr[left], arr[left], arr[left]);
    ll mid = (left + right) / 2;
    return seg[n] = merge(update(left,mid,2 * n), update(mid+1,right,2 * n + 1));
}

node ans(ll start, ll end, ll left, ll right, ll node_) {
    if (start > right || end < left)return node(inf);
    if (left <= start && end <= right) return seg[node_];
    ll mid = (start + end) / 2;
    return merge(ans(start, mid, left, right, node_ * 2), ans(mid + 1, end, left, right, node_ * 2 + 1));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll q;
    cin >> n;
    ll base = 1;
    for (base = 1; base < n + 1; base *= 2);
    for (ll i = 0; i < base; i++) {
        seg[i] = (0, inf, inf, inf);
    }
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        //seg[base + i] = ( arr[i],arr[i],arr[i],arr[i] );
    }
    update(0,n-1,1);
    cin >> q;
    while (q--) {
        ll tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        cout << max({ ans(0,n - 1, tmp1 - 1,tmp2 - 1,1).both,ans(0,n - 1, tmp1 - 1,tmp2 - 1,1).left ,ans(0,n - 1, tmp1 - 1,tmp2 - 1,1).right ,ans(0,n - 1, tmp1 - 1,tmp2 - 1,1).total }) <<'\n';
        //cout << ans(0,n - 1, tmp1 - 1,tmp2 - 1,1).both << '\n';
    }
    return 0;
}