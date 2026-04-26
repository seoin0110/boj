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
#define ll long long
using namespace std;

ll inf = 1000000007;
char result[15];
bool check[15];
ll ja = 0;
ll mo = 0;
ll l, c;
vector<char>v;
void pp(void) {
	for (ll i = 0; i < l; i++)
		cout << result[i];
	cout << '\n';
	return;
}
void back(ll a, ll b) {
	if (a == l) {
		if(ja >=2 && mo >=1)
			pp();
		return;
	}
	for (ll i = b; i < c; i++) {
		if (check[i] == true)continue;
		check[i] = true;
		if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
			mo++;
		else
			ja++;
		result[a] = v[i];
		back(a + 1, i+1);
		if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
			mo--;
		else
			ja--;
		check[i] = false;
	}
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> l >> c;
	v.resize(c);
	for (ll i = 0; i < c; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	back(0, 0);
	return 0;
}