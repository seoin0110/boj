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
using namespace std;
using ll = long long;


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cout << fixed;
	cout.precision(4);

	map<string, ll>mp;
	string s;
	double count = 0;
	while (getline(cin, s)) {
		if (mp.find(s) == mp.end())
			mp.insert({ s,1 });
		else
			(mp.find(s)->second)++;
		count = count + 1;
	}

	map<string, ll>::iterator iter;
	for (iter = mp.begin();iter != mp.end();iter++) {
		cout << iter->first << ' ' << ((double)(iter->second)/ count)*100<<'\n';
	}

	
}
