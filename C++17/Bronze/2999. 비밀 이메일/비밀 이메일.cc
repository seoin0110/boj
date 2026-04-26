#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    int c;
    int r;
    string s;
    getline(cin, s);
    n = s.size();
    for (int i = 10;i >= 1;i--)
    {
        if (n % i == 0 && i <= n / i)
        {
            r = i;
            c = n / i;
            break;
        }
    }
    for (int i = 0; i < r;i++) {
        for (int j = 0;j < c;j++) {
            cout << s[j * r +i];
        }
    }
    cout << "\n";
    return 0;
}