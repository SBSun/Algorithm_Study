#include <iostream>
#include <algorithm>

using namespace std;

int n, m, a[15004], cnt, ptS, ptE;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	ptS = 0;		// 시작 요소 인덱스
	ptE = n - 1;	// 마지막 요소 인덱스

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n); // 오름차순 정렬

	while (ptS < ptE) {
		if (a[ptS] + a[ptE] == m) { // 두 포인터가 가르키는 요소의 합이  m과 같으면
			cnt++;
			ptS++;
			ptE--;
		}
		if (a[ptS] + a[ptE] < m) { // m 보다 작으면
			ptS++;
		}
		if (a[ptS] + a[ptE] > m) { // m 보다 크면
			ptE--;
		}
	}	

	cout << cnt;
	return 0;
}