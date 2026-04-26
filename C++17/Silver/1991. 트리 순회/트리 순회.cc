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

int sons[26][2];
bool checked[26] = { false, };
int n, num, num1, num2;
char temp, temp1, temp2;

void func1(int a) {
	cout << (char)(a + 'A');
	if(sons[a][0]!=-1)
		if (!checked[sons[a][0]])
		{
			checked[sons[a][0]] = true;
			func1(sons[a][0]);
		}
	if(sons[a][1]!=-1)
		if (!checked[sons[a][1]]) {
			checked[sons[a][1]] = true;
			func1(sons[a][1]);
		}
	return;
}
void func2(int a) {
	if (sons[a][0] != -1)
		func2(sons[a][0]);
	cout<< (char)(a + 'A');
	if (sons[a][1] != -1)
		func2(sons[a][1]);
	return;
}
void func3(int a) {
	if (sons[a][0] != -1)
		func3(sons[a][0]);
	if (sons[a][1] != -1)
		func3(sons[a][1]);
	cout << (char)(a + 'A');
	return;
}


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;

	for (int i = 0; i < 26; i++) {
		sons[i][0] = -1;
		sons[i][1] = -1;
	}
	for (int i = 0; i < n; i++)
	{

		cin >> temp >> temp1 >> temp2;

		num = temp - 'A';
		if (temp1 != '.') {
			sons[num][0] = temp1 - 'A';
		}
		if (temp2 != '.') {
			sons[num][1] = temp2 - 'A';
		}
	}
	func1(0);
	cout << '\n';
	func2(0);
	cout << '\n';
	func3(0);
	cout << '\n';
	return 0;

	
}
