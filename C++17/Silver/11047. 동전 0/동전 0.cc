#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	ll n, k;
	ll s = 0;
	vector <ll>v;
	cin >> n >> k;
	for (int i = 0; i < n;i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = v.size() - 1;i >= 0;i--) {
		if (k / v[i] != 0)
		{
			s += k / v[i];
			k -= (k / v[i]) * v[i];
		}
		if (k == 0)
			break;
	}

	cout << s << '\n';
	return 0;
}