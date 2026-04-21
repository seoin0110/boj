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
	ll n;
	cout << fixed;
	cout.precision(6);
	cin >> n;
	priority_queue<double,vector<double>,greater<> >pq;
	while (n--) {
		double tmp;
		cin >> tmp;
		pq.push(tmp);
	}

	if (pq.size() == 1) {
		cout << pq.top();
		return 0;
	}
	double ans = 0;

	while (pq.size() != 1) {
		double tmp1 = pq.top();
		pq.pop();
		double tmp2 = pq.top();
		pq.pop();
		ans = (tmp1 + tmp2) / 2;
		pq.push(ans);
	}

	cout << pq.top();

	return 0;
}