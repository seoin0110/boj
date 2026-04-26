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

vector<int>v[200001];
bool b[200001] = { false, };
int k[200001] = { 0, };
int answer[200001];
int r[200001] = { 0, };
queue<int>q;
int time = 1;
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	int n, m;
	cin >> n;
	for (int i = 1; i <= n;i++)
	{
		while (1) {
			int a;
			cin >> a;
			if (a == 0)
				break;
			else {
				v[i].push_back(a);
				k[a]++;
			}
		}

	}
	for (int i = 1;i <= n;i++)
	{
		answer[i] = -1;
	}
	cin >> m;
	for (int i = 0;i < m;i++) {
		int a;
		cin >> a;
		answer[a] = 0;
		b[a] = true;
		q.push(a);
	}
	while (!q.empty())
	{
		int temp = q.size();
		for (int j = 0; j < temp;j++) {
			for (int i = 0;i < v[q.front()].size();i++) {
				r[v[q.front()][i]]++;
				if (r[v[q.front()][i]] >= (k[v[q.front()][i]] + 1) / 2 && !b[v[q.front()][i]])
				{
					answer[v[q.front()][i]] = time;
					q.push(v[q.front()][i]);
					b[v[q.front()][i]] = true;

				}
			}
			q.pop();
		}
		time++;
	}
	for (int i = 1; i <= n;i++)
		cout << answer[i] << ' ';
	cout << '\n';
	
}
