#include <iostream>
#include <algorithm>

using namespace std;
const int MAX = 100001;
int n, a[MAX];
long long sum, ret;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int>()); // �������� ����
	for (int i = 0; i < n; i++) {
		sum = a[i] * (i + 1); // �ش� a[i]�� ���Ը� �ߵ� �� �ִ� ������ ��
		if (sum > ret)
			ret = sum;
	}
	cout << ret;
	return 0;
}