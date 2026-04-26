#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int n;
    string s[10000];
    cin >> n;
    for (int i = 0;i <= n;i++) {
        getline(cin, s[i]);
    }

    for (int i = 1;i<=n;i++) {
        if (s[i][0]>='a'&&s[i][0]<='z' )
            s[i][0] = s[i][0] - 32;
        cout << s[i] << "\n";
    }

    return 0;
}