#include <iostream>
#include <algorithm>

using namespace std;

int a[100001];
int n, x, cnt;
int startIdx, endIdx;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// 오름차순 정렬
	sort(a, a + n);
	cin >> x;
	
	startIdx = 0;
	endIdx = n - 1;
	while (startIdx < endIdx) {
		if (a[startIdx] + a[endIdx] == x) {
			cnt++;
			startIdx++;
			endIdx--;
		}
		else {
			if (a[startIdx] + a[endIdx] < x) {
				startIdx++;
			}
			else {
				endIdx--;
			}
		}
	}

	cout << cnt << "\n";

	return 0;
}