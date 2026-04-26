#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll inf = 1e10;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll s1, s2;
	ll s3, s4;
	ll s5, s6;
	cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;

	if (s1 == s3 && s1 == s5) {
		if (s2 < s6 && s6 < s4) {
			cout << "2";
		}
		else if (s2 > s6 && s6 > s4) {
			cout << "2";
		}
		else {
			cout << "0";
		}
	}
	else if (s2 == s4 && s2 == s6) {
		if (s1 < s5 && s5 < s3) {
			cout << "2";
		}
		else if (s1 > s5 && s5 > s3) {
			cout << "2";
		}
		else {
			cout << "0";
		}
	}
	else if (s1 == s3) {
		cout << "0";
	}
	else if (s2 == s4) {
		cout << "0";
	}
	else {
		cout << "1";
	}

	return 0;
}