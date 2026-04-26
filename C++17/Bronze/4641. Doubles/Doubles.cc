#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    while (1)
    {
        int a[15];
        int i = 0;
        int sum = 0;
        while (1) {
            cin >> a[i];
            if (a[i] == 0||a[i]==-1)
                break;
            i++; //i는 갯수
        }
        if (a[0] == -1)
            break;
        for (int j = 0;j < i;j++) {
            for (int k = 0; k < i;k++)
            {
                if (a[j] == a[k] * 2)
                    sum++;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}