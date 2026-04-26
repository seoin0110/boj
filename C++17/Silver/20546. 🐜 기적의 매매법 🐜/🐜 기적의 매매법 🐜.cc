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

	int a, b;
	int a2=0, b2=0;
	int h;
	int c[14];
	cin >> a;
	b = a;
	for (int i = 0; i < 14; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < 14; i++) {
		if (a >= c[i]) {
			a2 = a2 + a / c[i];
			a = a - (a / c[i]) * c[i];
		}
	}
	a2 = a + a2 * c[13];
	for (int i = 0; i < 11;i++) {
		if (c[i] > c[i + 1] && c[i + 1] > c[i + 2]&& c[i + 2] > c[i + 3])
		{
			if (b >= c[i + 3]) {
				b2 = b2 + b / c[i + 3];
				b = b - (b / c[i + 3]) * c[i+3];
			}
		}
		if (c[i + 1] > c[i] && c[i + 2] > c[i + 1] && c[i + 3] > c[i + 2])
		{
			if (b2 > 0) {
				b += b2 * c[i + 3];
				b2 = 0;
			}
		}
	}
	b2 = b + b2 * c[13];

	if (a2 > b2)
		cout << "BNP\n";
	else if (a2 < b2)
		cout << "TIMING\n";
	else
		cout << "SAMESAME\n";

	return 0;
}