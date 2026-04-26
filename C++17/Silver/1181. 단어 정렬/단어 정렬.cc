#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
using ll = long long;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    vector<string>s;
    int a;
    string s3;
    cin >> a;
    getline(cin, s3);
    for (int i = 0;i < a;i++) {
        string s2;
        getline(cin, s2);
        s.push_back(s2);
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < a-1;i++) {
        for (int j = 0;j < a-1;j++) {
            if (s[j].size() > s[j + 1].size())
                swap(s[j], s[j + 1]);
            /*if (s[j].size() == s[j + 1].size())
                if (s[j] > s[j + 1])
                    swap(s[j], s[j + 1]);*/
        }
    }
    for (int i = 0;i < a - 1;i++) {
        if (s[i] == s[i + 1])
            continue;
        cout << s[i] << '\n';
    }
    cout << s[a - 1] << '\n';

    return 0;
}