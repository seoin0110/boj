#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;
int main(void){
    ll n;
    cin >> n;
    for(ll i =0;i<n;i++){
        ll tmp;
        cin >> tmp;
        vector<ll>v(tmp);
        for(ll j = 0;j<tmp;j++){
            cin >> v[j];
        }
        sort(v.begin(),v.end());
        cout << "Class " <<i+1<<"\n";
        cout << "Max " << v[tmp-1] << ", Min ";
        cout << v[0] << ", Largest gap ";
        ll t = v[1]-v[0];
        for(ll k = 1; k < tmp-1;k++)
            t = max(t, v[k+1]-v[k]);
        cout << t <<"\n";
    }
    
    
    
    
    return 0;
}