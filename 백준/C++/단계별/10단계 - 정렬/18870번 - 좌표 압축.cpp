#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int> cv(v);
	// �������� ����
	sort(cv.begin(), cv.end());
	// �ߺ� ����
	cv.erase(unique(cv.begin(), cv.end()), cv.end());

	for (int i = 0; i < n; i++) {
		auto it = lower_bound(cv.begin(), cv.end(), v[i]);  // v[i]���ҿ� �ش��ϴ� ���� iterator�� ��ȯ

		cout << it - cv.begin() << " "; // ������ iterator������ vector �����ּҸ� ���� �ε��� ���� ���� �� ����
	}
	return 0;
}	