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
		// m에 입력한 수의 횟수 추가
		m[a[i]]++;
		// m_first[a[i]] 값이 0일 때 해당 수가 몇 번째로 입력됐는지 저장
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