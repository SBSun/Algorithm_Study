#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };
int n, m, mx, visited[51][51];
char a[51][51];

void bfs(int y, int x) {
	// 매번 방문 여부 초기화
	memset(visited, 0, sizeof(visited));
	visited[y][x] = 1; // 시작점 방문처리
	queue<pair<int, int>> q;
	q.push({ y, x });
	while (q.size()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] || a[ny][nx] == 'W')
				continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });
			mx = max(mx, visited[ny][nx]);
		}
	}

	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 'L')
				bfs(i, j);
		}
	}
	
	cout << mx - 1 << "\n";

	return 0;
}