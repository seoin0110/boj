#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
using namespace std;
using ll = long long;
int main() {
	ll n;
	ll s = 0;
	cin >> n;
	if (n == 1 || n == 3) {
		cout << "-1\n";
		return 0;
	}
	if ((n % 5) % 2 != 0)
	{
		s = n / 5-1;
		n = n - s * 5;
		s = s + n / 2;
	}
	else {
		s = n / 5;
		n = n - s * 5;
		s = s + n / 2;
	}
	cout << s << "\n";
	

}