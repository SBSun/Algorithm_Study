#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int a[500001];
int cnt[8001];
int n, sum, avg, middle, maxCount, range;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		cnt[a[i] + 4000]++;
	}

	sort(a, a + n);
	maxCount = -1;
	int flag;
	// 최빈값 구하기
	for (int i = 0; i < 8001; i++) {
		if (cnt[i] > maxCount)
		{
			maxCount = cnt[i];
			flag = i;
		}
	}
	// 최빈값 중 두 번째 값 지정
	for (int i = flag + 1; i < 8001; i++)
	{
		if (cnt[i] == maxCount)
		{
			flag = i;
			break;
		}
	}

	avg = round(double(sum) / n);
	middle = a[(n - 1) / 2];
	maxCount = flag - 4000;
	range = a[n - 1] - a[0];

	cout << avg << "\n" << middle << "\n" << maxCount << "\n" << range;
	return 0;
}	