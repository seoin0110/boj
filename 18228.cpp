//18228

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n, index;
	int a, b;
	a = 1000000000;
	b = 1000000000;
	cin >> n;
	vector<int>v(n);
	for(int i = 0; i <n;i++){
		cin >> v[i];
		if(v[i] == -1)
			index = i;
	}
	for(int i = 0;i < index;i++)
	{
		a = min(a,v[i]);
	}
	for(int i = index +1;i<n;i++)
	{
		b = min(b,v[i]);
	}
	cout << a+b<<'\n';
	
}