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



int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	ll a, b, v; 
	cin >> a >> b >> v;
	ll k = 1;
	if (a >= v)
		cout << "1\n";
	else {
		k += (v-a) / (a-b);
		if ((v - a) % (a - b) > 0)
			k += 1;
		cout << k << '\n';
	}
	

    return 0;
}