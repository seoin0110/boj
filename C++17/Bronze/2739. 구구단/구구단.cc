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
    for (int i = 1; i <= 9;i++) {
        cout << c << " * " << i << " = " << c * i << '\n';
    }
    

    return 0;
}