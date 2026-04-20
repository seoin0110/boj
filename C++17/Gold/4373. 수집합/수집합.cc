#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ss {
    int val, x, y;
};

vector<int> numbers;
vector<ss> sum, diff;

bool comp(const ss& a, const ss& b) {
    return a.val < b.val;
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        numbers.resize(n);
        for (int i = 0; i < n; i++) cin >> numbers[i];

        sum.clear();
        diff.clear();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum.push_back({ numbers[i] + numbers[j], numbers[i], numbers[j] });
                diff.push_back({ numbers[i] - numbers[j], numbers[i], numbers[j] });
            }
        }

        sort(sum.begin(), sum.end(), comp);
        sort(diff.begin(), diff.end(), comp);

        int best = 0xffffffff;
        int ab = 0, cd = 0, cc = diff.size() - 1;

        for (ab = 0; ab < sum.size(); ab++) {
            while (cd < diff.size() && diff[cd].val < sum[ab].val) cd++;
            for (int i = cd; i < diff.size() && diff[i].val == sum[ab].val; i++) {
                if (diff[i].x <= best) continue;
                if (sum[ab].x == diff[i].x || sum[ab].x == diff[i].y) continue;
                if (sum[ab].y == diff[i].x || sum[ab].y == diff[i].y) continue;
                best = diff[i].x;
            }
            while (cc >= 0 && -diff[cc].val < sum[ab].val) cc--;
            for (int i = cc; i >= 0 && -diff[i].val == sum[ab].val; i--) {
                if (diff[i].y <= best) continue;
                if (sum[ab].x == diff[i].x || sum[ab].x == diff[i].y) continue;
                if (sum[ab].y == diff[i].x || sum[ab].y == diff[i].y) continue;
                best = diff[i].y;
            }
        }

        if (best == 0xffffffff) cout << "no solution" << endl;
        else cout << best << endl;
    }
    return 0;
}
