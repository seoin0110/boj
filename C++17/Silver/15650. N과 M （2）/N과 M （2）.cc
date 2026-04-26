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
#define max 10

int m, n;
int ans[max]; // 사용한 숫자들을 저장해서 출력용

void solve(int level, int num) {
	if (level == m) {
		for (int i = 0; i < m;i++)
			cout << ans[i] << " ";
		cout << '\n';
		return;
	}
	for (int i = num;i <= n;i++) {
		ans[level] = i;
		solve(level + 1, i + 1);
	}
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	cin >> n >> m;
	solve(0, 1);
	return 0;
}
