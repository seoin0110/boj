#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll inf = 1e10;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, k;
	cin >> n >> k;
	vector<ll>A(n);
	vector<ll>B(n);
	vector<ll>sumA(n + 1, 0);
	vector<ll>sumB(n + 1, 0);
	for (ll i = 0; i < n; i++) {
		cin >> A[i];
		sumA[i+1] = sumA[i] + A[i];
	}
	for (ll i = 0; i < n; i++) {
		cin >> B[i];
		sumB[i + 1] = sumB[i] + B[i];
	}
	ll ans = max(sumA[n], sumB[n]);
	for (ll i = 0; i <= k; i++) { // A에서 얼마나 뺄지
		ll tmpA = sumA[n];
		for (ll j = 0; j <= i; j++) { //A 앞에서 얼마나 뺄지
			tmpA = min(tmpA, sumA[n] - sumA[j] - (sumA[n] - sumA[n - (i - j)]));
		}
		ll sub = k - i;
		ll tmpB = sumB[n];
		for (ll j = 0; j <= sub; j++) {
			tmpB = min(tmpB, sumB[n] - sumB[j] - (sumB[n] - sumB[n - (sub - j)]));
		}
		ll tmp = max(tmpA, tmpB);
		ans = min(ans, tmp);
	}
	cout << ans;

	return 0;
}