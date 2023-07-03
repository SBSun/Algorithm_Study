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
	// 치킨집 최대 개수랑 같으면
	if (v.size() == m) {
		// 경우의 수 추가
		chickenList.push_back(v);
		return;
	}

	// 모든 경우의 수를 구하기 위해 조합(C)으로 구현
	// 치킨 수 만큼 반복
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
			// 집
			if (a[i][j] == 1)
				home.push_back({ i, j });
			// 치킨집
			if (a[i][j] == 2)
				chicken.push_back({ i, j });
		}
	}

	vector<int> v;
	combi(-1, v);

	// 치킨 집 경우의 수만큼 반복
	for (vector<int> cList : chickenList) {
		int ret = 0;
		// 집 개수만큼 반복
		for (pair<int, int> h : home) {
			int _min = 987654321;
			for (int ch : cList) {
				// 집과 치킨집 사이의 거리 구하기
				int dist = abs(h.first - chicken[ch].first) + abs(h.second - chicken[ch].second);
				// 최소값
				_min = min(_min, dist);
			}
			ret += _min;
		}
		result = min(result, ret);
	}
	cout << result << "\n";
	return 0;
}