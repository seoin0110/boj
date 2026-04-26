#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
using ll=long long;
int n;
int dp[50001];



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	vector<int>v;
	cin >> n;
	for (int i = 1;i <= 250;i++)
		v.push_back(i * i);

	dp[1] = 1;
	for (int i = 2;i <= n;i++) {
		int num = 50000;
		for (int j = 0;i >= v[j];j++) {
			if (dp[i - v[j]] + 1 < num)
				num = dp[i - v[j]] + 1;
		}
		dp[i] = num;
	}
	
	cout << dp[n] << '\n';
}