#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
ll n;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n;
	vector<P>A(n);
	vector<ll>B(n),res(n);
	for(int i=0;i<n;i++)cin>>A[i].first,A[i].second=i;
	for(int i=0;i<n;i++)cin>>B[i];
	sort(all(A));
	sort(all(B));
	for(int i=0;i<n;i++){
		if(A[i].first>B[i]){
			cout<<"-1";
			return 0;
		}
		res[A[i].second]=B[i];
	}
	for(int i=0;i<n;i++)cout<<res[i]<<' ';
}