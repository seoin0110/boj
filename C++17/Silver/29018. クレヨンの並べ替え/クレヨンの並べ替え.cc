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

bool cmp(char a, char b) {
    ll kind = 1;
    if (a >= '0' && a <= '9') {
        kind = 2;
    }
    else if (a >= 'a' && a <= 'z') {
        kind = 0;
    }
    ll kind2 = 1;
    if (b >= '0' && b <= '9') {
        kind2 = 2;
    }
    else if (b >= 'a' && b <= 'z') {
        kind2 = 0;
    }

    if (kind != kind2) {
        return kind < kind2;
    }
    return a < b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s) {
        if (s == "#") {
            break;
        }
        vector<char>v(s.length());
        for (ll i = 0; i < s.length(); i++) {
            v[i] = s[i];
        }
        sort(v.begin(), v.end(), cmp);
        for (ll i = 0; i < s.length(); i++) {
            cout << v[i];
        }
        cout << '\n';
    }
}