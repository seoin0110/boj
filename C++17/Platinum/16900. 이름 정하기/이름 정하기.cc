#include <iostream>
#include <string>
#include <cstring>
#include <limits.h>
#include <queue>
#include <stack>
#include <list>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>

typedef long long ll;
using namespace std;

int fail[500005] = {};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	ll n = s.size();
	ll k;
	cin >> k;

	for (int i = 1, j = 0; i < n; i++) {
		while (j > 0 && s[i] != s[j])j = fail[j - 1];
		if (s[i] == s[j]) fail[i] = ++j;
	}

	cout << n + (k - 1) * (n - fail[n - 1]);
}