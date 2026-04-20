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

ll arr[3001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    while(cin >> n){
        for(ll i = 1; i < n;i++)
            arr[i] = 0;
        ll ans = 1;
        ll prev, now;
        cin >> prev;
        for (ll i = 1; i < n;i++){
            cin >> now;
            if(abs(now-prev) == 0 || abs(now-prev)>=n)
                ans = 0;
            else if(arr[abs(now-prev)]==1){
                ans = 0;
            }else
                arr[abs(now-prev)]=1;
            prev = now;
        }
        for(ll i = 1 ; i < n;i++){
            if (arr[i]== 0)
                ans = 0;
        }
        if(ans){
            cout << "Jolly\n";
        }
        else
            cout << "Not jolly\n";
    }
}