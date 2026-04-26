#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

ll a[91][2];

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	
	cin >> n;
	a[1][0] = 0;
	a[1][1] = 1;
	for (ll i = 2; i <= n;i++) {
		a[i][0] = a[i - 1][0] + a[i - 1][1];
		a[i][1] = a[i - 1][0];
	}
	cout << a[n][0] + a[n][1] << '\n';

    return 0;
}