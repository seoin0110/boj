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
using namespace std;
using ll = long long;

struct node {
    int parent = -1;
    vector<int> children;
};

int ans = 0;
struct node tree[51];
bool checked[51] = { false, };
void dfs(int x) {
    checked[x] = true;
    int temp = 0;
    for (int nxt : tree[x].children) {
        if (checked[nxt])continue;
        dfs(nxt);
        temp++;
    }
    if (temp == 0)ans++;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    int root = -1;
    int de;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == -1)
        {
            root = i;
        }
        tree[i].parent = a;
        if (a != -1)
            tree[a].children.push_back(i);
    }
    cin >> de;

    if (de == root)
    {
        cout << 0 << '\n';
        return 0;
    }

    dfs(de);
    ans = 0;
    dfs(root);
    cout << ans << '\n';

}