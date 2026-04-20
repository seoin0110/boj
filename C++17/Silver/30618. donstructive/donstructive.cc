#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<ll, int> pli;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pli> weights(N);
    for (int i = 1; i <= N; ++i) {
        ll w = (ll)i * (N - i + 1);
        weights[i - 1] = make_pair(w, i);
    }

    // 가중치를 기준으로 내림차순 정렬
    sort(weights.rbegin(), weights.rend());

    vector<int> permutation(N + 1); // 1-based index
    int num = N;
    for (auto& p : weights) {
        int idx = p.second;
        permutation[idx] = num--;
    }

    // 결과 출력
    for (int i = 1; i <= N; ++i) {
        cout << permutation[i] << (i == N ? '\n' : ' ');
    }

    return 0;
}
