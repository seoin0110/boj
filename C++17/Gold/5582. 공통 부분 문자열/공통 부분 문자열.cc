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
#include <time.h>

#define ll long long
#define ld long double
using namespace std;
ll inf = 1e9 + 7;

ll dp[4000][4000];
ll ans = 0;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
	string a, b;
	cin >> a >> b;
	for(ll i = 0; i < a.length();i++){
		for(ll j = 0; j < b.length();j++){
			if(a[i] == b[j] && i>0 && j > 0){
				dp[i][j] = max((ll)1, dp[i-1][j-1] + 1);
				ans = max(dp[i][j], ans);
			}else if(a[i] == b[j]) {
				dp[i][j] =1;
				ans = max(dp[i][j], ans);
			}
		}
	}
	cout << ans;
    return 0;
}