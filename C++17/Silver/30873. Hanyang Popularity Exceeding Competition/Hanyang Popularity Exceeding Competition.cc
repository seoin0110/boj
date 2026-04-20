#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,x,y,ans;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if(abs(ans-x)<=y)ans++;
	}
	cout<<ans<<endl;
}