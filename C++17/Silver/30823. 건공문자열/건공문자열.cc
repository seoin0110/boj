#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=k-1;i<n;i++)cout<<s[i];
	if((n+k+1)%2)for(int i=k-2;i>=0;i--)cout<<s[i];
	else for(int i=0;i<k-1;i++)cout<<s[i];
}