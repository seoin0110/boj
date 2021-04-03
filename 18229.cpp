//18229

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n, m, k, index, num;
	int a[100][100];
	
	cin >> n >> m>> k;
		 
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 1;j<m;j++){
			a[i][j]+=a[i][j-1];
		}
	}
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			if(a[j][i]>=k)
			{
				cout << j+1 << ' '<<i+1<<'\n';
				return 0;
			}
		}
	}	
}