#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include<map>
#include<set>
#include<deque>
#include<functional>

using ll = long long;
using namespace std;
#define inf 1000000007


int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    ll n;
    cin >> n;
    bool win = false;
    while (n > 0) {
        if (n > 3)
        {
            n -= 3;
            win = !win;
        }
        else if (n == 3 || n == 1)
        {
            break;
        }
        else if(n == 2)
        {
            win = !win;
            break;
        }

    }
    // false가 상근

    if (win == false)
        cout << "CY\n";
    else
        cout << "SK\n";


    return 0;
}

