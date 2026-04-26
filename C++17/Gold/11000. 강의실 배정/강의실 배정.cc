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
using namespace std;
using ll = long long;

//강의실배정

struct cmp {
	bool operator()(pair<ll, ll> x, pair<ll, ll> y) {
		if (x.first != y.first) {
			return x.first > y.first;
		}
		return x.second > y.second;
	}
};

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n,m;
	int sum = 0;
	cin >> n;
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,cmp>pq;
	priority_queue<ll,vector<ll>,greater<>>pq2;
	m = n-1;
	while (n--) {
		int a, b;
		cin >> a >> b;
		pq.push({ a,b });
	}

	sum++;
	pq2.push(pq.top().second);
	pq.pop();
	while (m--) {
		pair<ll, ll> temp = pq.top();
		pq.pop();
		int ti = pq2.size();
		if (pq2.top() <= temp.first)
		{
			pq2.pop();
			pq2.push(temp.second);
		}
		else
		{
			sum++;
			pq2.push(temp.second);
		}
	}
	cout << sum << '\n';

}
