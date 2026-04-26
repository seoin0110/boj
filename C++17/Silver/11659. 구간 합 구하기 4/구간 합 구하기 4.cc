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
int n,m;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	cin >> n>>m;
	int a, b;
	vector<int>pre(n+1);
	pre[0]=0;
	for (int i = 1;i <= n;i++) {
		cin >> a;
		pre[i] += pre[i - 1] + a;
	}
	while (m--) {
			cin >> a >> b;
			cout << pre[b] - pre[a - 1] << '\n';
	}
}
