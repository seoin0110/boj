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
ll arr[31][31];

struct s {
    ll year;
    ll month;
    ll day;
    string name;
};

bool compare(const s& p1, const s& p2) {
    if (p1.year == p2.year) {
        if (p1.month == p2.month) {
            return p1.day > p2.day;
        }
        else
            return p1.month > p2.month;
    }
    else
        return p1.year > p2.year;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    vector<s>v(n);
    for (ll i = 0; i < n;i++) {
        s tmp;

        cin >> tmp.name >> tmp.day >> tmp.month >> tmp.year;
        v[i] = tmp;
    }
    sort(v.begin(), v.end(),compare);
    cout << v[0].name << '\n' << v[v.size() - 1].name;
    return 0;
}