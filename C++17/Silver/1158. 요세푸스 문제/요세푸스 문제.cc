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

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	int n, k;
	cin >> n >> k;
	queue<int>q;

	for (int i = 1;i <= n;i++)
	{
		q.push(i);
	}
	int cnt = 0;
	cout << '<';
	while (!q.empty()) {
		int temp = q.front();
		cnt++;
		if (cnt == k)
		{
			if (q.size() == 1)
				cout << temp;
			else
				cout << temp<<", ";
			q.pop();
			cnt = 0;
		}
		else
		{
			q.pop();
			q.push(temp);
		}
		
	}
	cout << '>';

}
