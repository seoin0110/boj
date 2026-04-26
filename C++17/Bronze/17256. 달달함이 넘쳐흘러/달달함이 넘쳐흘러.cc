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
using namespace std;
using ll = long long;


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	ll ax, ay, az, by, bx, bz, cx, cy, cz;
	cin >> ax >> ay >> az >> cx >> cy >> cz;
	bx = cx - az;
	by = cy / ay;
	bz = cz - ax;
	cout << bx << ' ' << by << ' ' << bz << '\n';

	return 0;
}
