#include <iostream>
#include <algorithm>

using namespace std;
const int MAX = 101;
int n, l, ret, a[MAX][MAX], b[MAX][MAX];

void solve(int a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		int j;
		for (j = 0; j < n - 1; j++) {
			if (a[i][j] == a[i][j + 1]) // ���� ĭ�� ���� ĭ�� ���̰� ������
				cnt++;
			// ���� ĭ�� 1ĭ ���� ���̰� l�������� ���θ� ��ġ�� �� ������
			else if (a[i][j] + 1 == a[i][j + 1] && cnt >= l)
				cnt = 1;
			// ���� ĭ�� 1ĭ ���� ���̰� ���� ���������� �������� ���� �ƴ϶��
			else if (a[i][j] - 1 == a[i][j + 1] && cnt >= 0)
				cnt = -l + 1; // n - 1������ ������ -l�� �ƴ� -l + 1
			else
				break;
		}
		if (j == n - 1 && cnt >= 0)
			ret++;
	}
	return;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> l;

	for (int i = 0; i < n; i++) {		// ��Ī���
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			b[j][i] = a[i][j];
		}
	}
	solve(a);
	solve(b);
	cout << ret << "\n";

	return 0;
}