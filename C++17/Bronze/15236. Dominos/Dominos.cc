#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    int a = 0;
    cin >> n;

    for (int i = 0; i <= n;i++) {
        for (int j = i;j <= n;j++) {
            a += j+i;
        }
    }
    
    


    cout << a << '\n';
     

    return 0;
}