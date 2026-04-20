#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    int half = N / 2;
    vector<int> groupA, groupB, result;

    // 그룹 A: 큰 수들
    for (int i = half + 1; i <= N; ++i) {
        groupA.push_back(i);
    }

    // 그룹 B: 작은 수들
    for (int i = 1; i <= half; ++i) {
        groupB.push_back(i);
    }

    // 그룹 A와 그룹 B의 원소를 번갈아 가며 결과 수열 생성
    int indexA = 0, indexB = 0;
    while (indexA < groupA.size() || indexB < groupB.size()) {
        if (indexA < groupA.size()) {
            result.push_back(groupA[indexA++]);
        }
        if (indexB < groupB.size()) {
            result.push_back(groupB[indexB++]);
        }
    }

    // 결과 수열 출력
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
