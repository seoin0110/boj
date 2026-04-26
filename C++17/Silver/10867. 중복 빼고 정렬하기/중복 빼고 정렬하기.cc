#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>

using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int idx;

	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0;i < n;i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	idx = unique(v.begin(), v.end())- v.begin();
	for (int i = 0; i < idx;i++)
		cout << v[i] << ' ';
	cout << '\n';
}