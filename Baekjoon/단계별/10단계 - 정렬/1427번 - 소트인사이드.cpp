#include <iostream>
#include <string>
using namespace std;

string n;
int a[10];
int temp, j;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n.length(); i++) {
		a[i] = n[i] - '0';
	}

	for (int i = 1; i < n.length(); i++) {
		// Ű �� ����
		temp = a[i];

		// Ű ���� �ε������� �Ʒ��� �ִ� ��ҵ�� ���Ͽ� �о��
		for (j = i - 1; j >= 0 && a[j] < temp; j--) {
			a[j + 1] = a[j];
		}
		// Ű �� ��ġ ����
		a[j + 1] = temp;
	}

	for (int i = 0; i < n.length(); i++) {
		cout << a[i];
	}

	return 0;
}	