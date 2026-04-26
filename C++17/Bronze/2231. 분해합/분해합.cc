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
	for (int i = 1; i <=n;i++) {
		int sum = i;
		int a = 1;
		while (i / a != 0) {
			sum += (i / a) % 10;
			a *= 10;
		}
		if (n == sum) {
			cout << i << '\n';
			return 0;
		}
	}

	cout << 0 << '\n';
	return 0;
}
