#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n;
	int n2;
	int k;
	cin >> n;
	n2 = (n % 10)*10 + (n % 10 + n / 10)%10;
	k = 1;
	while (n2 != n) {
		n2 = (n2 % 10)*10 + (n2 % 10 + n2 / 10)%10;
		k++;
	}
	cout << k << '\n';

	
	
}