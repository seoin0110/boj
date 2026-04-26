#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int n[5];
	int a[10];
	int mm;
	int l = 0;
	for (int i = 0; i < 5; i++)
		cin >> n[i];
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			for (int k = j + 1; k < 5; k++)
			{
				mm = 0;
				for (int b = max({n[i], n[j], n[k]}); b <= 1000000; b++) {
					if (b% n[i] == 0 && b%n[j] == 0 && b%n[k] == 0) {
						mm = b;
						break;
					}

				}
				a[l] = mm;
				l++;
			}
		}
	}
	cout << min({ a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9] }) << "\n";
}
