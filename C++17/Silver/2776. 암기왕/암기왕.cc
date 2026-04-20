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
ll chk[10];
ll n, k;
string s[10];
set<string>st;
void func(ll a, string ss) {
    if (a == k) {
        st.insert(ss);
        return;
    }
    for (ll i = 0; i < n; i++) {
        if (chk[i] == 0) {
            chk[i] = 1;
            func(a + 1,ss + s[i]);
            chk[i] = 0;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n1;
        ll n2;
        cin >> n1;
        set<ll>st;
        for(ll i = 0; i < n1;i++){
            ll a;
            cin >> a;
            st.insert(a);
        }
        cin >> n2;
        for(ll i = 0; i < n2;i++){
            ll a;
            cin >> a;
            if(st.find(a) == st.end()){
                cout << "0\n";
            }
            else
                cout << "1\n";
        }
    }

}