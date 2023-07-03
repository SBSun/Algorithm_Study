#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string n;
long long sum;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	sort(n.begin(), n.end(), greater<>());

	if (n.back() != '0')	// ������ ���ڰ� 0�� �ƴ϶��
		cout << -1 << "\n";
	else {
		for (char c : n) {
			sum += c - '0';
		}

		if (sum % 3 == 0) // �� �ڸ��� ������ 3���� ������ ���������� 30�� ����� �ȴ�.
			cout << n << "\n";
		else
			cout << -1 << "\n";
	}

	return 0;
}