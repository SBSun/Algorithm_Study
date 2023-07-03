#include <iostream>

using namespace std;

int n, s, a[100001], low, high, sum, len;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// 포인터 2개
	low = 0;
	high = 0;
	sum = a[0];
	len = n + 1;

	// low가 high보다 높거나 high가 요소의 수 보다 같거나 커지면 종료
	while (low <= high && high < n) {
		// 합이 s보다 작으면 high + 1의 요소 값 더해줌
		if (sum < s) {
			sum += a[++high];
		}
		// 크면 요소들 길이에 따라 len 값 변환
		else {
			len = min(len, high - low + 1);
			sum -= a[low++];
		}
	}

	if (len == n + 1)
		len == 0;

	cout << len;

	return 0;
}