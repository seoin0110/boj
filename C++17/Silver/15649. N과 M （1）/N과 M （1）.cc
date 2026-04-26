#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>

using namespace std;
using ll = long long;
#define max 10
int n,m;
int answer[max];
bool isused[max];
void func(int a) {
	if (a == m) {
		for (int i = 0;i < m;i++)cout << answer[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1;i <= n;i++) {
		if (isused[i])continue;
		isused[i] = true;
		answer[a] = i;
		func(a + 1);
		isused[i] = false;
	}
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cin >> n >> m;
	func(0);
	return 0;
}
