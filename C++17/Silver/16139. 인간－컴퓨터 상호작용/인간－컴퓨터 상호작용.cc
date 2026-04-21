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
ll alp[26][200001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (ll i = 1; i <= s.length(); i++) {
        for (ll j = 0; j < 26; j++)
        {
            alp[j][i] = alp[j][i - 1];
            if (j == (ll)(s[i-1] - 'a'))
            {
                alp[j][i]++;
            }
        }
    }

    ll n;
    cin >> n;
    while (n--) {
        char c;
        ll a, b;
        cin >> c >> a >> b;
        cout << alp[c - 'a'][b + 1] - alp[c - 'a'][a] << '\n';
    }
}