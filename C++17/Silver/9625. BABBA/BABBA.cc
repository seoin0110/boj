#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	int a = 1;
	int b = 0;
	int sum = 0;
	int temp = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		temp = a;
		a = b;
		b = b + temp;
	}
	cout << a << " " << b << "\n";

}
