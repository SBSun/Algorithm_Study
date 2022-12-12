#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
const int INF = 987654321;
int n, a[44], ret = INF;
string s;

void go(int here) {
	if (here == n + 1) {
		int sum = 0;
		// i�� 1, 2, 4... �̷������� �����ϸ缭 �� üũ
		for (int i = 1; i <= (1 << (n - 1)); i *= 2) {
			int cnt = 0;
			for (int j = 1; j <= n; j++) {
				if (a[j] & i) // j��� ���� i(1, 2, 4)�� ��
					cnt++; // T�� ���� �߰�
			}
			sum += min(cnt, n - cnt); // �������� ���� ������ ���Ͽ� ���� ���� �߰�
		}
		ret = min(ret, sum); // ������ ����
		return;
	}
	// ��� ����� �� üũ
	go(here + 1);	// �ȵ����ų�
	a[here] = ~a[here];	// ������
	go(here + 1);	// �����ų�
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		int value = 1;
		// H - 0, T - 1�� ǥ��
	    // HHT -> 124 -> 4��� ���ڷ� ǥ���� �� �ִ�.
		for (int j = 0; j < s.size(); j++) { 
			if (s[j] == 'T') // T�� value ��ġ��
				a[i] |= value;
			value *= 2; 
		}
	}

	go(1);
	cout << ret << "\n";
	return 0;
}