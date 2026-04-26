#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);

	int r, b;
	cin >> r >> b;
	for (int i = 1; i <= b; i++) {
		if (b % i == 0) {
			if ((i + 2) * (b / i + 2) == r + b)
			{
				cout << max(i + 2, b / i + 2) << ' '<<min(i+2,b/i+2)<<'\n';
				return 0;
			}
		}
	}
}