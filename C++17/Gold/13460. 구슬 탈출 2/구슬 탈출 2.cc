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
string s[10];
ll b[2];
ll r[2];
ll o[2];

struct pos {
    ll b[2];
    ll r[2];
    ll cnt = 0;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
        for (ll j = 0; j < s[i].length(); j++) {
            if (s[i][j] == 'B') {
                b[0] = i;
                b[1] = j;
            }
            else if (s[i][j] == 'R') {
                r[0] = i;
                r[1] = j;
            }
            else if (s[i][j] == 'O') {
                o[0] = i;
                o[1] = j;
            }
        }
    }
    queue<pos>q;
    pos tmp;
    tmp.b[0] = b[0];
    tmp.b[1] = b[1];
    tmp.r[0] = r[0];
    tmp.r[1] = r[1];
    tmp.cnt = 0;
    q.push(tmp);
    ll ans = 0;
    while (!q.empty()) {
        pos now = q.front();
        q.pop();
        pos tmp = now;
        if (tmp.cnt > 10)
            break;
        ll flag_b = 0;
        ll flag_r = 0;
        ll change = 0;
        if (tmp.b[0] < tmp.r[0]) {
            while (1) {
                if (s[tmp.b[0]][tmp.b[1]] == 'O')
                    flag_b = 1;
                if (tmp.b[0] < 2 || s[tmp.b[0] - 1][tmp.b[1]] == '#')
                    break;
                tmp.b[0]--;
                change++;
            }
            while (1) {
                if (s[tmp.r[0]][tmp.r[1]] == 'O')
                    flag_r = 1;
                if (tmp.r[0] < 2 || s[tmp.r[0] - 1][tmp.r[1]] == '#' || (flag_b == 0 && tmp.b[0] == tmp.r[0] - 1&& tmp.b[1] == tmp.r[1]))
                    break;
                tmp.r[0]--;
                change++;
            }
        }
        else {
            while (1) {
                if (s[tmp.r[0]][tmp.r[1]] == 'O')
                    flag_r = 1;
                if (tmp.r[0] < 2 || s[tmp.r[0] - 1][tmp.r[1]] == '#')
                    break;
                tmp.r[0]--;
                change++;
            }
            while (1) {
                if (s[tmp.b[0]][tmp.b[1]] == 'O')
                    flag_b = 1;
                if (tmp.b[0] < 2 || s[tmp.b[0] - 1][tmp.b[1]] == '#' || (flag_r == 0 && tmp.b[0] - 1== tmp.r[0] && tmp.b[1] == tmp.r[1]))
                    break;
                tmp.b[0]--;
                change++;
            }
        }
        if (flag_r == 1 && flag_b == 0) {
            ans = tmp.cnt+1;
            break;
        }
        else if (flag_r == 0 && flag_b == 0 && change) {
            tmp.cnt++;
            if (tmp.cnt > 10)
                break;
            q.push(tmp);
        }

        tmp = now;
        flag_b = 0;
        flag_r = 0;
        change = 0;
        if (tmp.b[1] < tmp.r[1]) {
            while (1) {
                if (s[tmp.b[0]][tmp.b[1]] == 'O')
                    flag_b = 1;
                if (tmp.b[1] < 2 || s[tmp.b[0]][tmp.b[1] - 1] == '#')
                    break;
                tmp.b[1]--;
                change++;
            }
            while (1) {
                if (s[tmp.r[0]][tmp.r[1]] == 'O')
                    flag_r = 1;
                if (tmp.r[1] < 2 || s[tmp.r[0]][tmp.r[1] - 1] == '#' || (flag_b == 0 && tmp.b[0] == tmp.r[0] && tmp.b[1] == tmp.r[1] - 1))
                    break;
                tmp.r[1]--;
                change++;
            }
        }
        else {
            while (1) {
                if (s[tmp.r[0]][tmp.r[1]] == 'O')
                    flag_r = 1;
                if (tmp.r[1] < 2 || s[tmp.r[0]][tmp.r[1] - 1] == '#')
                    break;
                tmp.r[1]--;
                change++;
            }
            while (1) {
                if (s[tmp.b[0]][tmp.b[1]] == 'O')
                    flag_b = 1;
                if (tmp.b[1] < 2 || s[tmp.b[0]][tmp.b[1] - 1] == '#' || (flag_r == 0 && tmp.b[0] == tmp.r[0] && tmp.b[1] - 1 == tmp.r[1]))
                    break;
                tmp.b[1]--;
                change++;
            }
        }
        if (flag_r == 1 && flag_b == 0) {
            ans = tmp.cnt + 1;
            break;
        }
        else if (flag_r == 0 && flag_b == 0 && change) {
            tmp.cnt++;
            if (tmp.cnt > 10)
                break;
            q.push(tmp);
        }

        tmp = now;
        flag_b = 0;
        flag_r = 0;
        change = 0;
        if (tmp.b[0] > tmp.r[0]) {
            while (1) {
                if (s[tmp.b[0]][tmp.b[1]] == 'O')
                    flag_b = 1;
                if (tmp.b[0] >= n - 2 || s[tmp.b[0] + 1][tmp.b[1]] == '#')
                    break;
                tmp.b[0]++;
                change++;
            }
            while (1) {
                if (s[tmp.r[0]][tmp.r[1]] == 'O')
                    flag_r = 1;
                if (tmp.r[0] >= n - 2 || s[tmp.r[0] + 1][tmp.r[1]] == '#' || (flag_b == 0 && tmp.b[0] == tmp.r[0] + 1 && tmp.b[1] == tmp.r[1]))
                    break;
                tmp.r[0]++;
                change++;
            }
        }
        else {
            while (1) {
                if (s[tmp.r[0]][tmp.r[1]] == 'O')
                    flag_r = 1;
                if (tmp.r[0] >= n - 2 || s[tmp.r[0] + 1][tmp.r[1]] == '#')
                    break;
                tmp.r[0]++;
                change++;
            }
            while (1) {
                if (s[tmp.b[0]][tmp.b[1]] == 'O')
                    flag_b = 1;
                if (tmp.b[0] >= n - 2 || s[tmp.b[0] + 1][tmp.b[1]] == '#' || (flag_r == 0 && tmp.b[0] + 1 == tmp.r[0] && tmp.b[1] == tmp.r[1]))
                    break;
                tmp.b[0]++;
                change++;
            }
        }
        if (flag_r == 1 && flag_b == 0) {
            ans = tmp.cnt + 1;
            break;
        }
        else if (flag_r == 0 && flag_b == 0 && change) {
            tmp.cnt++;
            if (tmp.cnt > 10)
                break;
            q.push(tmp);
        }

        tmp = now;
        flag_b = 0;
        flag_r = 0;
        change = 0;
        if (tmp.b[1] > tmp.r[1]) {
            while (1) {
                if (s[tmp.b[0]][tmp.b[1]] == 'O')
                    flag_b = 1;
                if (tmp.b[1] >= m - 2 || s[tmp.b[0]][tmp.b[1] + 1] == '#')
                    break;
                tmp.b[1]++;
                change++;
            }
            while (1) {
                if (s[tmp.r[0]][tmp.r[1]] == 'O')
                    flag_r = 1;
                if (tmp.r[1] >= m - 2 || s[tmp.r[0]][tmp.r[1] + 1] == '#' || (flag_b == 0 && tmp.b[0] == tmp.r[0] && tmp.b[1] == tmp.r[1] + 1))
                    break;
                tmp.r[1]++;
                change++;
            }
        }
        else {
            while (1) {
                if (s[tmp.r[0]][tmp.r[1]] == 'O')
                    flag_r = 1;
                if (tmp.r[1] >= m - 2 || s[tmp.r[0]][tmp.r[1] + 1] == '#')
                    break;
                tmp.r[1]++;
                change++;
            }
            while (1) {
                if (s[tmp.b[0]][tmp.b[1]] == 'O')
                    flag_b = 1;
                if (tmp.b[1] >= m - 2 || s[tmp.b[0]][tmp.b[1] + 1] == '#' || (flag_r == 0 && tmp.b[0] == tmp.r[0] && tmp.b[1] + 1 == tmp.r[1]))
                    break;
                tmp.b[1]++;
                change++;
            }
        }
        if (flag_r == 1 && flag_b == 0) {
            ans = tmp.cnt + 1;
            break;
        }
        else if (flag_r == 0 && flag_b == 0) {
            tmp.cnt++;
            if (tmp.cnt > 10)
                break;
            q.push(tmp);
        }
    }
    if (ans>0 && ans <= 10) {
        cout << ans;
    }
    else {
        cout << -1;
    }
    return 0;
}