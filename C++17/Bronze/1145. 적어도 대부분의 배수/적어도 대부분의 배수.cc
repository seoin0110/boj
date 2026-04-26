#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int n[5];
    int min2 = 0;
    int min3 = 1000000;
    for (int i = 0;i < 5;i++)
        cin >> n[i];
    min2 = min({ n[0],n[1],n[2],n[3],n[4] });
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1;j < 4;j++) {
            for (int k = j + 1;k < 5;k++) {
                for (int l = min2; l < 1000000;l++) {
                    if (l<min3&&l % n[i] == 0 && l % n[j] == 0 && l % n[k] == 0)
                    {
                        min3 = l;
                        break;
                    }
                }
            }
        }
    }

    cout << min3<<"\n";
    return 0;
}