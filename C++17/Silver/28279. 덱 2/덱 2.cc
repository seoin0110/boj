#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cstring>
#define ll long long
using namespace std;

ll inf = 1000000007;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    deque<ll>dq;
    for (ll i = 0; i < n; i++) {
        ll q;
        cin >> q;
        if (q == 1) {
            ll a;
            cin >> a;
            dq.push_front(a);
        }
        else if (q == 2) {
            ll a;
            cin >> a;
            dq.push_back(a);
        }
        else if (q == 3) {
            if (dq.empty()) {
                cout << "-1\n";
            }
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (q == 4) {
            if (dq.empty()) {
                cout << "-1\n";
            }
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (q == 5) {
            cout << dq.size() << '\n';
        }
        else if (q == 6) {
            if (dq.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if (q == 7) {
            if (dq.empty()) {
                cout << "-1\n";
            }
            else {
                cout << dq.front() << '\n';
            }
        }
        else {
            if (dq.empty()) {
                cout << "-1\n";
            }
            else {
                cout << dq.back() << '\n';
            }
        }
    }
}