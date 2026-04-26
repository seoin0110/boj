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
	
	int n;
	cin >> n;

	vector<int>v(n);
	for (int i = 0; i < n;i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(),greater<>());
	for (int i = 0; i < n;i++) {
		cout <<v[i]<<'\n';
	}

	return 0;
}
