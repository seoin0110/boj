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

ll par1[500001];

ll find1(ll a) {
    if (par1[a] < 0)
        return a;
    return par1[a] = find1(par1[a]);
}

bool uni(ll a, ll b) {
    ll x = find1(a);
    ll y = find1(b);
    if (x == y)
        return false;
    par1[x] = y;
    return true;

}


int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(0);

    ll n;
    string s;
    cin >> n;
    cin >> s;
    ll G = 0, A = 0, C = 0, T = 0;

    for (ll i = 0; i < s.size();i++)
    {
        if (s[i] == 'G')
            G++;
        else if (s[i] == 'A')
            A++;
        else if (s[i] == 'C')
            C++;
        else
            T++;
    }
    if (G == 0) {
        cout << "0\n";
        for (ll i = 0; i < s.size();i++)
            cout << 'G';
    }
    else if (A == 0)
    {
        cout << "0\n";
        for (ll i = 0; i < s.size();i++)
            cout << 'A';
    }
    else if (C == 0)
    {
        cout << "0\n";
        for (ll i = 0; i < s.size();i++)
            cout << 'C';
    }
    else if (T == 0)
    {
        cout << "0\n";
        for (ll i = 0; i < s.size();i++)
            cout << 'T';
    }
    else
    {
        ll m = min({ G,A,C,T });
        if (m == G)
        {
            cout << G<<"\n";
            for (ll i = 0; i < s.size();i++)
                cout << 'G';
        }
        else if (m == A)
        {
            cout << A << "\n";
            for (ll i = 0; i < s.size();i++)
                cout << 'A';
        }
        else if (m == C) {
            cout << C << "\n";
            for (ll i = 0; i < s.size();i++)
                cout << 'C';
        }
        else {
            cout << T << "\n";
            for (ll i = 0; i < s.size();i++)
                cout << 'T';
        }

    }
    return 0;

}

