#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	map<int,int>mp;
	cin>>n;
	for(int i=0;i<n;i++){
        int a,b,c,x;
		cin>>a;
		if(a==1){
			cin>>b>>c;
			mp[c]=b;
		}
		else {
			cin>>x;
			cout<<mp[x]<<'\n';
		}
	}
}