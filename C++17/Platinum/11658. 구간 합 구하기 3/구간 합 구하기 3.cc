#include <iostream>
using namespace std;
#define ll long long

const int MAX = 1024;  // n의 최대값 (문제에 맞게 조절)
ll arr[MAX + 1][MAX + 1];
ll seg[4 * MAX][4 * MAX];
int n, m;

// vx: x축 세그먼트 트리 노드 인덱스, lx~rx: 해당 구간
// vy: y축 세그먼트 트리 노드 인덱스, ly~ry: y 구간
void build_y(int vx, int lx, int rx, int vy, int ly, int ry) {
    if (ly == ry) {
        if (lx == rx)
            seg[vx][vy] = arr[lx][ly];
        else
            seg[vx][vy] = seg[vx * 2][vy] + seg[vx * 2 + 1][vy];
    }
    else {
        int my = (ly + ry) / 2;
        build_y(vx, lx, rx, vy * 2, ly, my);
        build_y(vx, lx, rx, vy * 2 + 1, my + 1, ry);
        seg[vx][vy] = seg[vx][vy * 2] + seg[vx][vy * 2 + 1];
    }
}

// x축 세그먼트 트리 구성: 각 노드마다 y축 세그먼트 트리를 build
void build_x(int vx, int lx, int rx) {
    if (lx != rx) {
        int mx = (lx + rx) / 2;
        build_x(vx * 2, lx, mx);
        build_x(vx * 2 + 1, mx + 1, rx);
    }
    build_y(vx, lx, rx, 1, 1, n);
}

// y축 구간 합 쿼리
ll query_y(int vx, int vy, int tly, int try_, int ly, int ry) {
    if (ry < tly || ly > try_) return 0;
    if (ly <= tly && try_ <= ry)
        return seg[vx][vy];
    int tmy = (tly + try_) / 2;
    return query_y(vx, vy * 2, tly, tmy, ly, ry) + query_y(vx, vy * 2 + 1, tmy + 1, try_, ly, ry);
}

// x축 구간 합 쿼리 (내부에서 y축 쿼리를 호출)
ll query_x(int vx, int tlx, int trx, int lx, int rx, int ly, int ry) {
    if (rx < tlx || lx > trx) return 0;
    if (lx <= tlx && trx <= rx)
        return query_y(vx, 1, 1, n, ly, ry);
    int tmx = (tlx + trx) / 2;
    return query_x(vx * 2, tlx, tmx, lx, rx, ly, ry) + query_x(vx * 2 + 1, tmx + 1, trx, lx, rx, ly, ry);
}

// y축 업데이트
void update_y(int vx, int lx, int rx, int vy, int tly, int try_, int x, int y, ll new_val) {
    if (tly == try_) {
        if (lx == rx)
            seg[vx][vy] = new_val;
        else
            seg[vx][vy] = seg[vx * 2][vy] + seg[vx * 2 + 1][vy];
    }
    else {
        int tmy = (tly + try_) / 2;
        if (y <= tmy)
            update_y(vx, lx, rx, vy * 2, tly, tmy, x, y, new_val);
        else
            update_y(vx, lx, rx, vy * 2 + 1, tmy + 1, try_, x, y, new_val);
        seg[vx][vy] = seg[vx][vy * 2] + seg[vx][vy * 2 + 1];
    }
}

// x축 업데이트 (내부에서 y축 업데이트 호출)
void update_x(int vx, int lx, int rx, int x, int y, ll new_val) {
    if (lx != rx) {
        int mx = (lx + rx) / 2;
        if (x <= mx)
            update_x(vx * 2, lx, mx, x, y, new_val);
        else
            update_x(vx * 2 + 1, mx + 1, rx, x, y, new_val);
    }
    update_y(vx, lx, rx, 1, 1, n, x, y, new_val);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    build_x(1, 1, n);

    while (m--) {
        int type;
        cin >> type;
        if (type == 0) {  // 업데이트: (x, y)를 new_val로 변경
            int x, y;
            ll new_val;
            cin >> x >> y >> new_val;
            update_x(1, 1, n, x, y, new_val);
        }
        else {  // 구간 합 쿼리: (x1, y1) ~ (x2, y2) 구간의 합
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            cout << query_x(1, 1, n, x1, x2, y1, y2) << "\n";
        }
    }
    return 0;
}
