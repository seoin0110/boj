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
#define max 40

int n;
bool isused1[max];
bool isused2[max];
bool isused3[max];
int cnt = 0;

void solve(int level) {
	if (level == n) {
		cnt++;
		return;
	}
	for (int i = 0;i < n;i++) {
		if (isused1[i] || isused2[i + level] || isused3[level -i+ n - 1])
			continue;
		isused1[i] = true;
		isused2[i + level] = true;
		isused3[level - i + n - 1] = true;
		solve(level + 1);
		isused1[i] = false;
		isused2[i + level] = false;
		isused3[level - i + n - 1] = false;
	}
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	cin >> n;
	solve(0);
	cout << cnt;
	return 0;
}
