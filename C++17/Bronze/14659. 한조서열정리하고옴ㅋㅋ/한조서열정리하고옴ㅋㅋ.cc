#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int c;
    vector<int>v;
    int max = 0;
    int max2 = 0;
    int k;
    int b = 0;
    cin >> c;
    for (int i = 0; i < c;i++) {
        cin >> k;
        v.push_back(k);
    }
    for (int i = 0; i < c; i++) {
        if (v[i] > max) {
            max = v[i];
            b = 0;
        }
        else {
            b++;
        }
        if (b > max2)
            max2 = b;
    }
    cout << max2 << '\n';
    return 0;
}