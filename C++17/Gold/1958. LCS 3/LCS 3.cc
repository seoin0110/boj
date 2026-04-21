#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cstring>
using ll = long long;
using namespace std;

int dp[100][100][100];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s1, s2,s3;
	cin >> s1 >> s2 >>s3;
	if (s1[0] == s2[0] && s2[0] == s3[0])dp[0][0][0] = 1;
	for (ll i = 1; i < s1.size(); i++) {

		if (s1[i] == s2[0] && s1[i] == s3[0])
		{
			dp[i][0][0] = 1;
		}
		else {
			dp[i][0][0] = min(dp[i - 1][0][0], 1);
		}
		
	}
	for (ll i = 1; i < s2.size(); i++)
	{
		if (s2[i] == s1[0] && s2[i] == s3[0])
		{
			dp[0][i][0] = 1;
		}
		else {
			dp[0][i][0] = min(dp[0][i-1][0], 1);
		}

	}
	for (ll i = 1; i < s3.size(); i++)
	{
		if (s3[i] == s1[0] && s3[i] == s2[0])
		{
			dp[0][0][i] = 1;
		}
		else {
			dp[0][0][i] = min(dp[0][0][i-1], 1);
		}

	}
	for (ll i = 1; i < s2.size(); i++) {
		for (ll j = 1; j < s3.size(); j++) {
			if (s1[0] == s2[i] && s1[0] == s3[j]) {
				dp[0][i][j] = 1;
			}
			else {
				dp[0][i][j] = max(dp[0][i-1][j], dp[0][i][j-1]);
			}
		}
	}
	for (ll i = 1; i < s1.size(); i++) {
		for (ll j = 1; j < s3.size(); j++) {
			if (s2[0] == s1[i] && s2[0] == s3[j]) {
				dp[i][0][j] = 1;
			}
			else {
				dp[i][0][j] = max(dp[i-1][0][j], dp[i][0][j - 1]);
			}
		}
	}
	for (ll i = 1; i < s1.size(); i++) {
		for (ll j = 1; j < s2.size(); j++) {
			if (s3[0] == s1[i] && s3[0] == s2[j]) {
				dp[i][j][0] = 1;
			}
			else {
				dp[i][j][0] = max(dp[i-1][j][0], dp[i][j-1][0]);
			}
		}
	}


	for (ll i = 1; i < s1.size(); i++) {
		for (ll j = 1; j < s2.size(); j++) {
			for (ll k = 1; k < s3.size(); k++) {
				if (s1[i] == s2[j] && s2[j] == s3[k])
					dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
				else {
					dp[i][j][k] = max({ dp[i - 1][j][k], dp[i][j - 1][k],dp[i][j][k - 1] });
				}
			}
			
		}
	}
	cout << dp[s1.size() - 1][s2.size() - 1][s3.size()-1];
	
	return 0;
}