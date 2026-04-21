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
vector<char>v;
ll chk[10]; // 숫자가 사용되었는지 체크할 배열
ll arr[10]; // 숫자 저장할 배열
ll ans_flag = 0;
ll ans1[10];
ll ans2[10];
ll n;
void func(ll a) {
	if (a == n+1) {
		ll flag = 1;
		for (ll i = 0; i < n; i++) {
			if (v[i] == '<' && arr[i] > arr[i + 1]) {
				flag = 0;
				break;
			}
			else if (v[i] == '>' && arr[i] < arr[i + 1]) {
				flag = 0;
				break;
			}
		}
		if (flag&& !ans_flag) {
			for (ll i = 0; i < n + 1; i++) {
				ans1[i] = arr[i];
			}
			ans_flag = 1;
		}
		else if(flag) {
			for (ll i = 0; i < n + 1; i++) {
				ans2[i] = arr[i];
			}
		}
		return;
	}
	for (ll i = 0; i < 10; i++) {
		if (chk[i])
			continue;
		chk[i] = 1;
		arr[a] = i;
		func(a + 1);
		chk[i] = 0;
	}
}

int main() {
	cin.tie(0), cout.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;
	v.resize(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];
	func(0);
	for (ll i = 0; i <= n; i++) {
		cout << ans2[i];
	}
	cout << '\n';
	for (ll i = 0; i <= n; i++) {
		cout << ans1[i];
	}
	return 0;
}