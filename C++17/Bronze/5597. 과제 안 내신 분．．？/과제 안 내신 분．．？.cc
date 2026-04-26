#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    vector<bool>v(31,0);
    int k;
    for (int i = 0;i < 28;i++) {
        cin >> k;
        v[k]=true;
    }
    vector<ll>a;
    for (int i = 1; i <= 30;i++)
        if (!v[i])a.push_back(i);
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size();i++)
        cout << a[i] << '\n';
    return 0;
}