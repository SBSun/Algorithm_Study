#include <iostream>

using namespace std;

int n, m, j, l, r, res, temp;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m >> j;

	l = 1; // �ٱ����� ������

	for (int i = 0; i < j; i++) {
		// �ٱ����� ���� ���� ��ġ + �ٱ����� ĭ �� - 1
		r = l + m - 1;
		cin >> temp;
		// ���� �ٱ��� ��ġ�� �������� �̵����� �ʾƵ� ��
		if (temp >= l && temp <= r)
			continue;
		else {
			// �ٱ��� ���ʿ� �����´ٸ�
			if (temp < l) {
				res += (l - temp);
				l = temp;
			}
			// �ٱ��� �����ʿ� �����´ٸ�
			else {
				l += (temp - r);
				res += (temp - r);
			}
		}
	}

	cout << res;
    return 0;
}	