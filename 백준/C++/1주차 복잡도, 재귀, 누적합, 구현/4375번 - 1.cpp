#include <iostream>

using namespace std;

int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (cin >> n) {
		int cnt = 1, ret = 1;

		while (true) {
			// cnt�� 1, 11, 111, 1111... �� �����ϴ� ����
			// �Է��� ���� ������ �������ٸ� cnt�� �ڸ��� ret ���
			if (cnt % n == 0) {
				cout << ret << "\n";
				break;
			}
			else {
				// ������ �������� �ʴ´ٸ� cnt�� 1�ڸ��� �� �ø��鼭 üũ
				// cnt�� 1�� �� : (1 * 10) + 1 = 11, �� �������� (11 * 10) + 1 = 111
				cnt = (cnt * 10) + 1;
				// cnt�� �ڸ����� �þ� int ������ �ʰ��ϸ� �ȵǹǷ� n�� ���� ������������ ����
				cnt %= n;
				// �ڸ��� ����
				ret++;
			}
		}
	}

	return 0;
}	