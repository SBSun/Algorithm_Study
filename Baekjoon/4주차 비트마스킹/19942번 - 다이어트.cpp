#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
const int INF = 987654321;
int n, mp, mf, ms, mv;
int b, c, d, e, ret = INF, sum;
struct A { // 요소가 5개이기 때문에 구조체로
	int mp, mf, ms, mv, cost;
}a[16];
map<int, vector<vector<int>>> ret_v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin >> mp >> mf >> ms >> mv;
	
	for (int i = 0; i < n; i++) { // 재료 정보 입력
		cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv >> a[i].cost;
	}
	// 모든 경우의 수 체크
	for (int i = 1; i < (1 << n); i++) {
		b = c = d = e = sum = 0;
		vector<int> v;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				v.push_back(j + 1); // 조합 집어 넣기
				b += a[j].mp;
				c += a[j].mf;
				d += a[j].ms;
				e += a[j].mv;
				sum += a[j].cost;
			}
		}

		if (b >= mp && c >= mf && d >= ms && e >= mv) { // 최저 영양소 기준
			if (ret >= sum) { // 하한값
				ret = sum;
				ret_v[ret].push_back(v); // 최종 조합
			}
		}
	}

	if (ret == INF)
		cout << -1 << "\n";
	else {
		sort(ret_v[ret].begin(), ret_v[ret].end());
		cout << ret << "\n";
		for (int a : ret_v[ret][0]) {
			cout << a << " ";
		}
	}
	return 0;
}