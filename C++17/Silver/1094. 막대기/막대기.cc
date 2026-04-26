#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	
	int n;
	int k=0;
	int a = 64;
	cin >> n;
	while(a != 1)
	{
		if (n >= a)
		{
			n = n - a;
			a = a / 2;
			k++;
		}
		else {
			a = a / 2;
		}
	}
	if (n == 1)
		k++;
	cout << k << "\n";
	
}
