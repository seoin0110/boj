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
    cin >> c;
    for (int i = 0; i < c;i++)
    {
        int a;
        string b;
        cin >> a;
        cin >> b;
        for (int j = 0;j < b.size();j++) {
            for (int k = 0; k <a;k++)
                cout << b[j];
        }
        cout << "\n";
    }

    return 0;
}