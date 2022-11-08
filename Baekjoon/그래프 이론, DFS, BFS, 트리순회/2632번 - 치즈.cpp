#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int dy[4] = { -1, 0, 1, 0 }, dx[4] = { 0, 1, 0, -1 };

int a[101][101], visited[101][101];
int n, m, cnt = 0, cnt2 = 0;
vector <pair<int, int>> v;

void go(int y, int x) {
	visited[y][x] = 1;

	// 해당 타일이 치즈면
	if (a[y][x] == 1) {
		v.push_back({ y, x });
		return;
	}

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx])
			continue;

		go(ny, nx);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cnt = 0;
	cnt2 = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	while (true) {
		// 배열 초기화
		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
		v.clear();
		go(0, 0);
		cnt2 = 0;
		// 치즈 녹이기
		for (pair<int, int> b : v) {
			cnt2++;
			a[b.first][b.second] = 0;
		}

		bool flag = false;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				// 치즈가 아직 존재하면 1
				if (a[i][j] != 0)
					flag = 1;
			}
		}

		cnt++;
		if (!flag)
			break;
	}

	cout << cnt << "\n" << cnt2 << "\n";


	return 0;
}
