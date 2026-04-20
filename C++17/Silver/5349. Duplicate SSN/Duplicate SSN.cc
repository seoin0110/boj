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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    set<string>st;
    string s;
    set<string>ans;
    while (cin >> s) {
        if (st.find(s) != st.end()) {
            ans.insert(s);
        }
        else
            st.insert(s);
    }

    for (auto x : ans) {
        cout << x <<'\n';
    }
    return 0;
}
