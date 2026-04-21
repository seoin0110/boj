#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll a, b, c;
	cin >> a >> b >> c;
	ll ans = 1;
	while (b) {
		if(b%2)ans = (ans*a)%c;
		a = (a*a)%c;
		b /= 2;
	}

	cout << ans%c;


	return 0;
}

