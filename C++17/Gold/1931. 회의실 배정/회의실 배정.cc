#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	
	int n;
	int a,b;
	int c = 0;
	int f;
	vector<pair<int, int>>v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back({ b, a });
	}
	sort(v.begin(), v.end());
	c = 1;
	f = v[0].first;
	for (int i = 1; i < n; i++) {
		if (f <= v[i].second){
			f = v[i].first;
			c++;
		}
	}
	cout << c << "\n";
	
}
