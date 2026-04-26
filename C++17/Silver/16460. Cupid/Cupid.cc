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

    string a, b;
    ll c;
    ll n;
    ll m = 0;
    ll f = 0;
    cin>> a >> b >> c;
    if (b.size() == 2)
    {
        m = 1;
        f = 1;
    }
    else
    {
        if (b[0] == 'F')
            f = 1;
        else
            m = 1;
    }
    cin >> n;
    vector<string>v;
    for (ll i = 0; i < n;i++) {
        string s1,s2;
        ll s3;
        cin >> s1 >> s2 >> s3;
        if (s2[0] == 'F'&&f==1 && s3<=c)
        {
            v.push_back(s1);
        }
        else if (s2[0] == 'M' && m == 1 && s3<=c) {
            v.push_back(s1);
        }

    }
    if (v.size() == 0) {
        cout << "No one yet\n";
        return 0;
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < v.size();i++)
        cout << v[i] << '\n';
    return 0;

}

