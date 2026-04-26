#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <limits.h>
using namespace std;
using ll = long long;
ll dp[1000][15] = { 0, };
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	int min2 = n * m;
	int s2 = 0, s3 = 0;
	string s[50];
	string s1;
	getline(cin, s1);
	for (int i = 0; i < n;i++) {
		getline(cin, s[i]);
	}
	for (int i = 0; i <= n - 8;i++) {
		for (int j = 0; j <= m - 8;j++) {
			s2 = 0;
			s3 = 0;
			for (int l = i;l < i + 8;l++) {
				for (int k = j;k < j + 8;k++) {
					if (l % 2 == k % 2)
					{
						if (s[l][k] == 'B')
							s3++;
					}
					else
						if (s[l][k] == 'W')
							s3++;

				}
			}
			s2 = 64 - s3;
			min2 = min({ s2,s3,min2 });
		}
	}
	cout << min2 << '\n';

	return 0;
}