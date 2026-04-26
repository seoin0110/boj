#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;
int dp[10000000];
int func(int a) {
    if (dp[a] != 0)
        return dp[a]%10;
    return dp[a] = func(a - 2)%10 + func(a - 1)%10;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    for (int i = 0;i < 1000000;i++)
        dp[i] = 0;
    dp[1] = 1;
    dp[2] = 2;
    int c;
    cin >> c;
    cout << func(c)%10 << '\n';
    return 0;
}