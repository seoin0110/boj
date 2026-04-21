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

int dp[1000][1000];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	if (s1[0] == s2[0])dp[0][0] = 1;
	for (ll i = 1; i < s1.size(); i++) {
		if (s1[i] == s2[0])
		{
			dp[i][0] = 1; 
		}
		else {
			dp[i][0] = min(dp[i - 1][0], 1);
		}
		
	}
	for (ll i = 1; i < s2.size(); i++)
	{
		if (s2[i] == s1[0]) {
			dp[0][i] = 1;
		}
		else {
			dp[0][i] = min(dp[0][i - 1], 1);
		}

	}
	for (ll i = 1; i < s1.size(); i++) {
		for (ll j = 1; j < s2.size(); j++) {
			if (s1[i] == s2[j]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[s1.size() - 1][s2.size() - 1];
	
	return 0;
}