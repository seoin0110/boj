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

ll inf = 1000000007;

ll arr[2000003];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    arr[1000001] = 0;
    arr[1000002] = 1;
    ll n;
    cin >> n;
    for(ll i = 1000003; i <= 2000002;i++){
        arr[i] = (arr[i-1] + arr[i-2]) %1000000000;
    }
    for(ll i = 1000000; i >= 0;i--){
        arr[i] = (arr[i+2] - arr[i+1])%1000000000;
    }
    if(arr[n+1000001] > 0){
        cout << 1<<'\n';
    }else if(arr[n+1000001] == 0){
        cout << 0 <<'\n';
    }else{
        cout << -1 <<'\n';
    }
    ll ans = arr[n+1000001]%1000000000;
    if(ans > 0)
        cout << ans;
    else
        cout << - ans;
}