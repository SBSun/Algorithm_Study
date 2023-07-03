#include <iostream>
#include <algorithm>

using namespace std;

int n, m, a[15004], cnt, ptS, ptE;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	ptS = 0;		// ���� ��� �ε���
	ptE = n - 1;	// ������ ��� �ε���

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n); // �������� ����

	while (ptS < ptE) {
		if (a[ptS] + a[ptE] == m) { // �� �����Ͱ� ����Ű�� ����� ����  m�� ������
			cnt++;
			ptS++;
			ptE--;
		}
		if (a[ptS] + a[ptE] < m) { // m ���� ������
			ptS++;
		}
		if (a[ptS] + a[ptE] > m) { // m ���� ũ��
			ptE--;
		}
	}	

	cout << cnt;
	return 0;
}