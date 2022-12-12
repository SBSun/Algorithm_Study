#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int n, c, a[1004];
vector<pair<int, int>> v;
map<int, int> m, m_first;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) {
		return m_first[a.second] < m_first[b.second];
	}
	else {
		return a.first > b.first;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> c;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		// m�� �Է��� ���� Ƚ�� �߰�
		m[a[i]]++;
		// m_first[a[i]] ���� 0�� �� �ش� ���� �� ��°�� �Էµƴ��� ����
		if (m_first[a[i]] == 0) {
			m_first[a[i]] = i + 1;
		}
	}

	for (auto it : m) {
		v.push_back({ it.second, it.first });
	}

	sort(v.begin(), v.end(), compare);

	for (auto it : v) {
		for (int i = 0; i < it.first; i++) {
			cout << it.second << " ";
		}
	}
    return 0;
}	