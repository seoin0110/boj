#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cout << fixed;
    cout.precision(3);
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        int k;
        float average = 0;
        int sum = 0;
        cin >> k;
        vector<int>v(k);
        for (int j = 0;j < k;j++) {
            cin >> v[j];
            average += v[j];
        }
        average /= k;
        for (int j = 0;j < k;j++)
            if (v[j] > average)
                sum++;
        average = (float)sum * 100 / k;
        cout << average << "%\n";
    }
    return 0;
}