#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;

vector<int>k;
vector<int>v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int c;
    int a;
    int min;
    cin >> c;
    for (int i = 0; i < 2 * c;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    min = v[0] + v[2 * c - 1];
    for (int i = 1; i < c;i++) {
        if (v[i] + v[2 * c - 1 - i] < min)
            min = v[i] + v[2 * c - 1 - i];
    }

    cout << min << '\n';
    
    return 0;
}