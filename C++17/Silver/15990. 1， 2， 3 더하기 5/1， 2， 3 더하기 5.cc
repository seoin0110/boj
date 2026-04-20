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
using namespace std;
using ll = long long;

const ll inf = 1000000009;
ll dp[100001][3];

ll func(ll a, ll b){
    if(dp[a][b] >= 0){
        return dp[a][b];
    }
    dp[a][b] = 0;
    for(ll i = 0; i < 3;i++){
        if(a - b - 1 > 0 && i != b)dp[a][b] += func(a-b-1, i);
    }
    return dp[a][b]%=inf;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >>t;
	for(ll i = 0; i <= 100000;i++){
	    for(ll j = 0; j < 3; j++)
	        dp[i][j] = -1;
	}
	dp[1][0] = 1;
	dp[2][1] = 1;
	dp[3][0] = 1;
	dp[3][1] = 1;
	dp[3][2] = 1;
	
	while(t--){
	    ll n;
	    cin >> n;
	    cout << (func(n, 0) + func(n, 1) + func(n, 2))%inf << '\n';
	}


	return 0;
}
