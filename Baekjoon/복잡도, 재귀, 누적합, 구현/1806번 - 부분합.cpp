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

	// ������ 2��
	low = 0;
	high = 0;
	sum = a[0];
	len = n + 1;

	// low�� high���� ���ų� high�� ����� �� ���� ���ų� Ŀ���� ����
	while (low <= high && high < n) {
		// ���� s���� ������ high + 1�� ��� �� ������
		if (sum < s) {
			sum += a[++high];
		}
		// ũ�� ��ҵ� ���̿� ���� len �� ��ȯ
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