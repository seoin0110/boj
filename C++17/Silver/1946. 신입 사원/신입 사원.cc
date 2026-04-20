#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<int, int> > v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
		}
		sort(v.begin(), v.end());
		int interview_score = n;
		int ans = n;
		for (int i = 0; i < n; i++) {
			if (v[i].second > interview_score) {
				ans--;
			}
			interview_score = min(interview_score, v[i].second);
		}
		cout << ans << '\n';
	}
	return 0;
}