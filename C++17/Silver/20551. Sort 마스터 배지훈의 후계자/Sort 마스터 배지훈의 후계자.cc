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
	int n, m;
	cin >> n >> m;
	vector<int>v(n);
	vector<int>v2(m);
	for (int i = 0; i < n;i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++)
		cin >> v2[i];
	vector<int>ans(m);
	for (int i = 0; i < m; i++) {
		if ((upper_bound(v.begin(), v.end(), v2[i]) - lower_bound(v.begin(), v.end(), v2[i]) > 0)&&((lower_bound(v.begin(),v.end(),v2[i])-v.begin())<n))
			ans[i] = lower_bound(v.begin(), v.end(), v2[i]) - v.begin();
		else
			ans[i] = -1;
		cout << ans[i] << '\n';
	}

	return 0;
}
