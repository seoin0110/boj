#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	string s;

	cin >> s;
	for (int i = 0; i < (s.size()/2); i++) {
		if (s[i] != s[s.size() - i-1]) {
			cout << "0\n";
			return 0;
		}
	}

	cout << "1\n";
}
