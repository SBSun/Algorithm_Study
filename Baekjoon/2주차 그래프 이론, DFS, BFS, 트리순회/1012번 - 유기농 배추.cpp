#include <iostream>
#include <algorithm>

using namespace std;

const int max_size = 51;
const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };
int a[max_size][max_size];
bool visited[max_size][max_size];
int t, m, n, k, nextY, nextX, cnt;

// 재귀함수를 통해 시작좌표와 연결된 컴포넌트(connected component)들에 방문처리를 해준다.
void DFS(int startY, int startX) {
	visited[startY][startX] = 1;

	for (int i = 0; i < 4; i++) {
		nextY = startY + dy[i];
		nextX = startX + dx[i];

		if (nextY < 0 || nextY >= m || nextX < 0 || nextX >= n)
			continue;
		if (a[nextY][nextX] == 1 && !visited[nextY][nextX])
			DFS(nextY, nextX);
	}

	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;

	// 테스트 수만큼
	while (t--) {
		cin >> m >> n >> k;

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
		}

		cnt = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == 1 && !visited[i][j]) { // 방문 가능한 좌표 && 방문하지 않았던 좌표
					cnt++;
					DFS(i, j);
				}
			}
		}

		cout << cnt << "\n";
	}



	return 0;
}