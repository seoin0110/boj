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

struct cmp {
	bool operator()(ll x,ll y){
		if (abs(x) == abs(y))
			return x > y;
		return abs(x) > abs(y);
	
	}
};

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n;
	cin >> n;
	priority_queue<ll,vector<ll>,cmp>pq;

	while (n--) {
		int a;
		cin >> a;
		if(a != 0)
			pq.push(a);
		else
		{
			if (!pq.empty())
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
			else
			{
				cout << "0\n";
			}
		}


	}

}
