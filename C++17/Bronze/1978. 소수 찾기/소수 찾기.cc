#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <limits.h>
using namespace std;
using ll = long long;
int k[1001] = { 0, };
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	k[1] = 1;
	int n;
	vector <int>v;
	int t;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	for (int i = 2;i < v[n - 1];i++)
	{
		if (k[i] == 0)
		{
			int m = i*2;
			while (m <= v[n - 1]) {
				k[m] = 1;
				m += i;
			}

		}
	}
	for (int i = 0; i < n;i++)
	{
		if (k[v[i]] == 0)
			sum++;
	}
	cout << sum << '\n';
	return 0;
}