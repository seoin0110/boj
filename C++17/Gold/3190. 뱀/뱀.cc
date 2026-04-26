#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<queue>
#include<string>
#include<cstring>
#include<stack>
#include <map>
#include<set>
#include<deque>
#include <random>
#include<functional>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

/*
int v[50][50];
int min[50];
*/
int check[100][100];
int apple[100][100];
deque<pair<int, int> >q;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    /*
    int n, m;
    cin >> n >> m;
    int hs = 0, ck = 0;
    for(int i = 0; i < n;i++){
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
            if (v[i][j] == 1)
                hs++;
            if (v[i][j] == 2)
                ck++;
        }
    }
    */

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        apple[a - 1][b - 1] = 1;
    }
    int l, su = 0;
    cin >> l;
    deque<pair<int, char> >d;
    for (int i = 0; i < l; i++) {
        pair<int, char> tmp;
        cin >> tmp.first >> tmp.second;
        tmp.first -= su;
        d.push_back(tmp);
        su += tmp.first;
    }
    q.push_back({ 0,0 });
    check[0][0] = 1;
    int state = 0;
    int ans = 0;
    //0 : 오른쪽, 1 : 아래, 2 : 왼쪽, 3 : 위쪽 + 시계방향 - 반시계방향
    while (1) {
        pair<int, int> front = q.front();
        //cout << front.first << ' ' << front.second << endl;
        if (!d.empty()) {
            pair<int, char> direction = d.front();
            d.pop_front();
            if (direction.first > 0) {
                direction.first--;
                d.push_front(direction);
            }
            else {
                if (!d.empty()) {
                    
                    pair<int, char> t = d.front();
                    t.first--;
                    d.pop_front();
                    d.push_front(t);

                }
                if (direction.second == 'L') {
                    state = (state + 3) % 4;
                }
                else {
                    state = (state + 1) % 4;
                }
            }
        }
        ans++;
        if (state == 0) {
            front.second++;
        }
        else if (state == 1) {
            front.first++;
        }
        else if (state == 2) {
            front.second--;
        }
        else if (state == 3) {
            front.first--;
        }
        if (front.first < 0 || front.first >= n || front.second < 0 || front.second >= n)
            break;
        q.push_front(front);
        if (check[front.first][front.second]) {
            break;
        }
        else {
            check[front.first][front.second] = 1;
        }
        if (apple[front.first][front.second]==0) {
            pair<int, int> back = q.back();
            q.pop_back();
            check[back.first][back.second] = 0;
        }
        else {
            apple[front.first][front.second] = 0;
        }
    }

    cout << ans;


    return 0;
}
