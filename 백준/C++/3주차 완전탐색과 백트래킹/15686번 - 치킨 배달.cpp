#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

int n, m, a[51][51], result = 987654321;
vector<vector<int>> chickenList;
vector<pair<int, int>> home, chicken;

void combi(int start, vector<int> v) {
	// ġŲ�� �ִ� ������ ������
	if (v.size() == m) {
		// ����� �� �߰�
		chickenList.push_back(v);
		return;
	}

	// ��� ����� ���� ���ϱ� ���� ����(C)���� ����
	// ġŲ �� ��ŭ �ݺ�
	for (int i = start + 1; i < chicken.size(); i++) {
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}

	return;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			// ��
			if (a[i][j] == 1)
				home.push_back({ i, j });
			// ġŲ��
			if (a[i][j] == 2)
				chicken.push_back({ i, j });
		}
	}

	vector<int> v;
	combi(-1, v);

	// ġŲ �� ����� ����ŭ �ݺ�
	for (vector<int> cList : chickenList) {
		int ret = 0;
		// �� ������ŭ �ݺ�
		for (pair<int, int> h : home) {
			int _min = 987654321;
			for (int ch : cList) {
				// ���� ġŲ�� ������ �Ÿ� ���ϱ�
				int dist = abs(h.first - chicken[ch].first) + abs(h.second - chicken[ch].second);
				// �ּҰ�
				_min = min(_min, dist);
			}
			ret += _min;
		}
		result = min(result, ret);
	}
	cout << result << "\n";
	return 0;
}