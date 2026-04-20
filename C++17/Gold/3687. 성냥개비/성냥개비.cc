#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;

string dp1[101]; //빈 문자열로 초기화, dp1[i] : i개의 성냥개비를 썼을 때 만들 수 있는 최소값
string dp2[101]; //빈 문자열로 초기화, dp1[i] : i개의 성냥개비를 썼을 때 만들 수 있는 최대값



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    ll t;
    cin >> t;
    map<int, string> mp;
    mp.insert({ 2, "1" });
    mp.insert({ 3, "7" });
    mp.insert({ 4, "4" });
    mp.insert({ 5, "2" });
    mp.insert({ 6, "0" });
    mp.insert({ 7, "8" });
    dp1[2] = "1";
    dp1[3] = "7";
    dp1[4] = "4";
    dp1[5] = "2";
    dp1[6] = "6";
    dp1[7] = "8";
    for (ll i = 8; i <= 100; i++) {
        dp1[i] = dp1[i - 2] + "1";
        for (ll j = 3; j <= 7; j++) {
            if (i - j < 2)
                continue;
            string tmp = dp1[i - j] + mp[j];
            if (dp1[i].length() > tmp.length()) {
                dp1[i] = tmp;
            }
            else if (dp1[i].length() == tmp.length() && dp1[i].compare(tmp) > 0) {
                dp1[i] = tmp;
            }
        }
    }
    dp2[2] = "1";
    dp2[3] = "7";
    for (ll i = 4; i <= 100; i++) {
        dp2[i] = dp2[i - 2] + "1";
        if (i - 3 < 2)
            continue;
        string tmp = dp2[i - 3] + "7";
        if (dp2[i].length() < tmp.length()) {
            dp2[i] = tmp;
        }
        else if (dp2[i].length() == tmp.length() && dp2[i].compare(tmp) < 0) {
            dp2[i] = tmp;
        }
    }
    
    for (ll i = 0; i < t; i++) {
        ll a;
        cin >> a;
        cout << dp1[a] << ' ' << dp2[a] << '\n';
    }

    return 0;
}
