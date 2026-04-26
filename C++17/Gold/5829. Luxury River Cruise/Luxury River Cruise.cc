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

int n, arr[1001][2], pattern[500], m, k, graph[1001], temp, cnt = 0, c[1001] = { 0 };
bool checked[1001] = { false };
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    char x;
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (x == 'L')
            pattern[i] = 0;
        else
            pattern[i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        temp = i;
        for (int j = 0; j < m; j++)
            temp = arr[temp][pattern[j]];
        graph[i] = temp;
    }
    temp = 1;
    while (1) {
        checked[temp] = true;
        cnt++;
        if (cnt == k + 1) {
            cout << temp;
            return 0;
        }
        c[temp] = cnt;
        if (checked[graph[temp]]) {
            int cycle = c[temp] - c[graph[temp]] + 1;
            k -= (cnt - cycle);
            k %= cycle;
            temp = graph[temp];
            for (int j = 0; j < k; j++) {
                temp = graph[temp];
            }
            cout << temp;
            return 0;
        }
        temp = graph[temp];
    }
    return 0;

}
