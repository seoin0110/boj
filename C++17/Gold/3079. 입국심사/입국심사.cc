#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 100005

long long N, M, low, high, mid, sum, answer;
int line[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> line[i];
	}
	high = 1e18;
	low = 1;
	answer = high;
	while (high >= low) {
		mid = (high + low) / 2;
		long long sum = 0;
		for (int i = 0; i < N; i++) {
			sum += mid / line[i];
			if (sum >= M)break;
		}
		if (sum >= M) {
			if (mid < answer)answer = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	cout << answer << "\n";
}