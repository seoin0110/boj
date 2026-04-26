#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s1;
    cin >> n;
    getline(cin, s1);
    for (int i = 0; i < n; i++) {
        string s;
        int score = 0;
        int sum = 0;
        getline(cin, s);
        for (int j = 0; j < s.size();j++) {
            if (s[j] == 'O')
            {
                score++;
                sum = sum + score;
            }
            else
                score = 0;
        }
        cout << sum << '\n';
    }

    return 0;
}