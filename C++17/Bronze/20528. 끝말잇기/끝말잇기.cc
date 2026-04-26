#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
using ll = long long;
ll n;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    string s[100];

    cin >> n;
    for (int i = 0; i < n;i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        if (s[i][0] != s[i][s[i].size() - 1])
        {
            cout << "0\n";
            return 0;
        }
    }
    for (int i = 0; i < n - 1;i++) {
        if (s[i][0] != s[i + 1][0])
        {
            cout << "0\n";
            return 0;
        }
    }
    cout << "1\n";
    return 0;
}