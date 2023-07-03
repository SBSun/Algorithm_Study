#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, res, sum, part;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 1; i < n; i++) {
		sum = 0;
		part = i;

		// 각 자릿수의 합 구하기
		while (part != 0) {
			sum += part % 10;
			part /= 10;
		}

		// 각 자릿수의 합과 i를 더한 값이 n이면 생성자
		if (sum + i == n) {
			res = i;
			break;
		}
	}

	cout << res << "\n";

	return 0;
}