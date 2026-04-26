#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>

using namespace std;
using ll = long long;

//lower_bound : key 이상의 값들 중 첫 iterator 반환, 만약 없으면 end 반환
//upper_bound : key 초과~~
/*
	1. 배열에 그 수가 몇개 있는지
	2. 배열에 그 수가 있다면 몇개 있는지
*/

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int k;
	int m;
	cin >> k;
	vector<int>v(k);
	while (k--) {
		cin >> v[k];
	}
	sort(v.begin(), v.end());
	cin >> m;
	vector<int>v2(m);
	for (int i = 0;i < m;i++)
		cin >> v2[i];
	for (int i = 0;i < m;i++) {
		cout << upper_bound(v.begin(),v.end(),v2[i]) - lower_bound(v.begin(), v.end(), v2[i]) << ' ';
	}
	cout << '\n';
}