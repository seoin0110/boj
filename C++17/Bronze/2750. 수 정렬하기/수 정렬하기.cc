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
    int N[1000];
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> N[i];
    for (int i = 0;i < n-1;i++) {
        for (int j = 0; j < n-1;j++) {
            if (N[j] > N[j + 1])
                swap(N[j], N[j + 1]);
        }
    }
    for (int i = 0; i < n;i++)
        cout << N[i] << '\n';

    return 0;
}