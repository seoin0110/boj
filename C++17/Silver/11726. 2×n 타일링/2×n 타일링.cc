#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;

int dp[1000];

int func(int a) {
    if (dp[a] != 0)
        return dp[a]%10007;
    /*if (a == 1)
        return dp[1] = 1;
    if (a == 2)
        return dp[2] = 2;*/

    return dp[a]=func(a - 1)%10007 + func(a - 2)%10007;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    for (int i = 0; i < 1000;i++)
        dp[i] = 0;
    dp[1] = 1;
    dp[2] = 2;

    int a;
    cin >> a;
    cout << func(a)%10007<<'\n';

    return 0;
}