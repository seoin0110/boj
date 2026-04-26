#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	
	int a,b,c,sum = 0;

	cin >> a >> b >> c;
	if (a != b && b != c && c != a)
		sum = max({ a,b,c }) * 100;
	else if (a == b && b == c)
		sum = 10000 + a * 1000;
	else if (a == b)
		sum = 1000 + a * 100;
	else if (b == c)
		sum = 1000 + b * 100;
	else
		sum = 1000 + a * 100;
	cout << sum << "\n";
	

}