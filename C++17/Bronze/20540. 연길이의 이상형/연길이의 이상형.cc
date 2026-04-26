#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>

using namespace std;
using ll = long long;


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	if (s[0] == 'E')
		s[0] = 'I';
	else
		s[0] = 'E';
	if (s[1] == 'S')
		s[1] = 'N';
	else
		s[1] = 'S';
	if (s[2] == 'T')
		s[2] = 'F';
	else
		s[2] = 'T';
	if (s[3] == 'J')
		s[3] = 'P';
	else
		s[3] = 'J';
	cout << s << '\n';
	return 0;
}
