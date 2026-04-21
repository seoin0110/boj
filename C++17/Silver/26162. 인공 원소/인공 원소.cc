#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main(void){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i = 0; i < n;i++){
        cin >> v[i];
        ll ans = 0;
        for(ll j = 2; j <=v[i]-2;j++){
            ll ans1 = 1;
            ll ans2 = 1;
            for(ll k = 2; k <j;k++){
                if(j%k==0){
                    ans1 = 0;
                    break;
                }
            }
            for(ll k = 2; k < v[i]-j;k++){
                if((v[i]-j)%k==0){
                    ans2 = 0;
                    break;
                }
            }
            if(ans1&&ans2){
                ans = 1;
                break;
            }
        }
        if(ans){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    
    return 0;
}