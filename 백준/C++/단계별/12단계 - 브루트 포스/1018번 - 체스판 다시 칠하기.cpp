#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int chess[51][51];
int n, m, _min = 2500;
int check(int x, int y)
{
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == chess[i][j]) // Ž���� �����ϴ� ù��° ����� ��� �϶�
				cnt1++;
			if ((i + j + 1) % 2 == chess[i][j]) // Ž���� �����ϴ� ù��° ����� ������ �϶�
				cnt2++;
		}
	}

	return min(cnt1, cnt2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) { // B�� '0', W�� '1'�� ����
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			if (c == 'B') chess[i][j] = 0;
			else chess[i][j] = 1;
		}
	}

	for (int i = 0; i <= n - 8; i++) { // check(x, y)�Լ��� Ž���� ������ �ε��� ����
		for (int j = 0; j <= m - 8; j++) {
			if (_min > check(i, j)) 
				_min = check(i, j); // ���� ���� ������ �Ǻ�
		}
	}

	cout << _min << "\n";
	return 0;
}