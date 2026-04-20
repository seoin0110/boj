#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ll x, y;
    cin >> x >> y;

    // If x and y are equal, no operations are needed
    if (x == y) {
        cout << 0 << endl;
        return 0;
    }

    ll diff = abs(y - x);
    ll gcd = __gcd(x, diff);

    // Case 1: One operation is enough
    if (gcd > 1) {
        cout << 1 << endl;
        if (y > x)
            cout << diff << endl; // Add diff to x
        else
            cout << -diff << endl; // Subtract diff from x
    }
    // Case 2: Two operations are needed
    else {
        cout << 2 << endl;
        ll z1 = x * (y - 1);
        ll z2 = y * (x - 1);

        cout << z1 << endl; // First operation: add z1 to x
        cout << -z2 << endl; // Second operation: subtract z2 from x1
    }

    return 0;
}
