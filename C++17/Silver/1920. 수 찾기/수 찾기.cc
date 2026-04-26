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
	
	배열에 그 수가 있다면 어디있는지
*/

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n, m;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cin >> m;
	vector<int>v2(m);
	vector<int>ans(m);
	for (int i = 0;i < m;i++)
		cin >> v2[i];
	for (int i = 0; i < m;i++) {
		cout << binary_search(v.begin(), v.end(), v2[i]) << '\n';
	}

}