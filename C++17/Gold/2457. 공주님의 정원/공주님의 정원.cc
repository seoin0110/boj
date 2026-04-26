#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
using namespace std;
using ll = long long;

const ll inf = 999999999;
typedef struct {
	ll a;
	ll b;
	ll c;
	ll d;
}date;

/*class cmp {
public:
	bool operator()(date a,date b) {
		if (a.c == b.c)return a.d < b.d;
		if (a.c > b.c) return false;
		else return true;*/
		/*if (a.d > b.d)return false;
		if (a.d < b.d)return true;
		return a.a > b.a;*/
		/*if (a.a < b.a)return false;
		if (a.a > b.a)return true;
		if (a.b < b.b)return false;*/
/*
		return true;

	}

};
*/

bool cmp(date a, date b) {
	if (a.c == b.c)return a.d > b.d;
	if (a.c > b.c) return true;
	else return false;
	/*if (a.d > b.d)return false;
	if (a.d < b.d)return true;
	return a.a > b.a;*/
	/*if (a.a < b.a)return false;
	if (a.a > b.a)return true;
	if (a.b < b.b)return false;*/

	//return true;

}


int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<date>v(n);
	//priority_queue<date,vector<date>,cmp >v;
	for (ll i = 0; i < n;i++) {
		cin >> v[i].a >> v[i].b >> v[i].c >> v[i].d;
	}
	sort(v.begin(), v.end(), cmp);
	ll ff = n - 1;
	ll ss = 0;
	date tmp = v[ss];
	if (tmp.c != 12) {
		cout << "0\n";
		return 0;
	}
	ll fm = tmp.a;
	ll fd = tmp.b;
	ll sm = tmp.a;
	ll sd = tmp.b;
	while ((ss!=ff) && (v[ss].c == 12)) {
		date tmp = v[ss];
		ss++;
		if ((tmp.a == fm && tmp.b < fd) || tmp.a < fm) {
			fm = tmp.a;
			fd = tmp.b;
		}
	}
	/*if ((sm == 2 || sm == 4 || sm == 6 || sm == 8 || sm == 9 || sm == 11) && sd == 1) {
		fm = sm - 1;
		fd = 31;
	}
	else if ((sm == 5 || sm == 7 || sm == 10 || sm == 12) && sd == 1) {
		fm = sm - 1;
		fd = 30;
	}
	else if (sm == 3 && sd == 1) {
		fm = sm - 1;
		fd = 28;
	}
	else {
		fm = sm;
		fd = sd - 1;
	}*/
	sm = fm;
	sd = fd;
	if (sm == 3 && sd == 1 || sm < 3) {
		cout << 1 << '\n';
		return 0;
	}
	ll ans = 0;
	ans++;
	ll check = 0;
	while (ss!=ff+1) {
		tmp = v[ss];
		ss++;
		
		if ((tmp.c == fm && tmp.d >= fd) || tmp.c > fm) {
			if (tmp.a < sm) {
				sm = tmp.a;
				sd = tmp.b;
				check++;
			}
			else if (tmp.a == sm && tmp.b < sd) {
				sd = tmp.b;
				check++;
			}
			if (ss==ff+1 && check > 0) {
				ans++;
			}
			else if (ss==ff+1 && check == 0) {
				cout << "0\n";
				return 0;
			}
		}
		else {
			ss--;
			if (check == 0) {
				cout << "0\n";
				return 0;
			}
			ans++;
			if (sm == 3 && sd == 1 || sm < 3) {
				break;
			}
			/*if ((sm == 2 || sm == 4 || sm == 6 || sm == 8 || sm == 9 || sm == 11) && sd == 1) {
				fm = sm - 1;
				fd = 31;
			}
			else if ((sm == 5 || sm == 7 || sm == 10 || sm == 12) && sd == 1) {
				fm = sm - 1;
				fd = 30;
			}
			else if (sm == 3 && sd == 1) {
				fm = sm - 1;
				fd = 28;
			}
			else {
				fm = sm;
				fd = sd-1;
			}*/
			fm = sm;
			fd = sd;
			check = 0;
		}
	}
	if (sm == 3 && sd == 1 || sm < 3) {
		cout << ans << '\n';
	}
	else
		cout << "0\n";

}
