#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;
using ll = long long;
int main(){
	int n;
	int k;
	int k2 = 0;
	int k5 = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		k = i;
		while (k % 2 == 0 || k % 5 == 0) {
			if (k % 2 == 0) {
				k = k / 2;
				k2++;
			}
			if (k % 5 == 0) {
				k = k / 5;
				k5++;
			}
		}
	}
	cout << min(k2, k5) << "\n";

}