#include <iostream>

using namespace std;

int t, h, w, n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int floor, room;
		
		// �� ���ϱ�
		floor = n % h;

		// �Ϻ��� ������ �������� �ְ��� ����
		if (floor == 0)
			floor = h;

		// �� ��ȣ ���ϱ�
		// (n - 1)�� n / h�� ������ �� ���� �� ���� ������ ��츦 ���
		room = (n - 1) / h + 1;
		cout << floor * 100 + room << "\n";
	}
	return 0;
}