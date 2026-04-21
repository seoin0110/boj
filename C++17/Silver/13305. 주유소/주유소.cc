#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

ll a[100000]; //킬로
ll b[100000]; //가격

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	ll n;
	ll c = 0;
	ll m = 0;
	cin >> n;
	for (int i = 0; i < n - 1; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	c = b[0];
	for (int i = 0; i < n - 1; i++) {
		if (c <= b[i])
			m = m + c * a[i];
		else
		{
			c = b[i];
			m = m + c * a[i];
		}
	}
	cout << m << "\n";

	
}