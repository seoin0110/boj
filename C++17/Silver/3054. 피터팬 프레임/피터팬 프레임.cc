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
	string s;
	cin >> s;
	char c;
	for (ll i = 0; i < s.size(); i++) {
		if ((i + 1) % 3 == 0) {
			c = '*';
		}
		else
			c = '#';
		cout << ".." << c << ".";
	}
	cout << ".\n";
	for (ll i = 0; i < s.size(); i++) {
		if ((i + 1) % 3 == 0) {
			c = '*';
		}
		else
			c = '#';
		cout << "." << c << "." << c;
	}
	cout << ".\n";
	for (ll i = 0; i < s.size(); i++) {
		if ((i + 1) % 3 == 0) {
			c = '*';
		}
		else
			c = '#';
		if (i != 0 && (i + 1) % 3 == 1) {
			cout << '*' << "." << s[i] << ".";
		}
		else
			cout << c << "." << s[i] << ".";
	}
	cout << c << "\n";
	for (ll i = 0; i < s.size(); i++) {
		if ((i + 1) % 3 == 0) {
			c = '*';
		}
		else
			c = '#';
		cout << "." << c << "." << c;
	}
	cout << ".\n";
	for (ll i = 0; i < s.size(); i++) {
		if ((i + 1) % 3 == 0) {
			c = '*';
		}
		else
			c = '#';
		cout << ".." << c << ".";
	}
	cout << ".";
	return 0;
}