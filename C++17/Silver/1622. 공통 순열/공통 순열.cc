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
ll alp1[26];
ll alp2[26];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s1, s2;
    while (getline(cin, s1), getline(cin, s2)) {
        for (ll i = 0; i < 26; i++)
        {
            alp1[i] = 0;
            alp2[i] = 0;
        }
        string s3 = "";
        for (ll i = 0; i < s1.length(); i++) {
            alp1[s1[i] - 'a']++;
        }
        for (ll i = 0; i < s2.length(); i++) {
            alp2[s2[i] - 'a']++;
        }
        for (ll i = 0; i < 26; i++) {
            for (ll j = 0; j < min(alp1[i], alp2[i]); j++) {
                s3 += ('a' + i);
            }
        }
        cout << s3 <<'\n';
    }
    return 0;
}
