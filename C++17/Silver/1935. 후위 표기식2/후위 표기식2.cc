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
//후위 표기식2
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cout << fixed;
	cout.precision(2);
	float ab[26] = { 0.0, };
	int n;
	int cnt = 0;
	cin >> n;
	stack<double>st;
	string s;
	cin >> s;
	for (int i = 0; i < n;i++)
		cin >> ab[i];

	for (int i = 0;i < s.size();i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			st.push(ab[s[i] - 'A']);
		else
		{
			double a, b;
			b = st.top();
			st.pop();
			a = st.top();
			st.pop();

			if (s[i] == '+')
				st.push(a + b);
			else if (s[i] == '-')
				st.push(a - b);
			else if (s[i] == '/')
				st.push(a / b);
			else if (s[i] == '*')
				st.push(a * b);
		}
	}

	cout << st.top() << '\n';
}
