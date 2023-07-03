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

		// �� �ڸ����� �� ���ϱ�
		while (part != 0) {
			sum += part % 10;
			part /= 10;
		}

		// �� �ڸ����� �հ� i�� ���� ���� n�̸� ������
		if (sum + i == n) {
			res = i;
			break;
		}
	}

	cout << res << "\n";

	return 0;
}