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
#include <map>
#include <set>
#include <cstring>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        vector<ll>v;
        ll a;
        while(cin >> a){
            
            if(a==0){
                break;
            }
            v.push_back(a);
        }
        ll flag = 1;
        sort(v.begin(),v.end(),greater<ll>());
        ll sum = 0;
        for(ll i = 0; i < v.size();i++){
            ll tmp = 1;
            for(ll j = 0; j <= i;j++){
                tmp *= v[i];
                if(tmp > 5000000){
                    flag = 0;
                    break;
                }
            }
            tmp *= 2;
            if(tmp > 5000000){
                flag = 0;
                break;
            }
            sum += tmp;
            if(sum > 5000000){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout << sum <<'\n';
        }
        else{
            cout << "Too expensive\n";
        }
        
    }
}