#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, l, r, cnt, sum, a[51][51];
vector<pair<int, int>> v;
bool visited[51][51];
const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

void dfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx])
			continue;

		// 방문하지 않은 인접한 노드의 값이 l과 r 사이면
		if (abs(a[ny][nx] - a[y][x]) >= l && abs(a[ny][nx] - a[y][x]) <= r){
			visited[ny][nx] = 1;
			// 평균값을 할당해주기 위해 좌표를 저장한다.
			v.push_back({ ny, nx });
			// 합계 계산
			sum += a[ny][nx];
			dfs(ny, nx);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> l >> r;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	while (true) {
		// 인구이동 여부
		bool flag = false;

		memset(visited, false, sizeof(visited));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				// 방문하지 않은 정점이라면
				if (!visited[i][j]) {
					// 초기화
					v.clear();
					visited[i][j] = 1;
					v.push_back({ i, j });
					sum = a[i][j];
					dfs(i, j);

					if (v.size() == 1)
						continue;

					for (pair<int, int> b : v) {
						a[b.first][b.second] = sum / v.size();
						flag = true;
					}
				}		
			}
		}

		if (!flag)
			break;

		cnt++;
	}

	cout << cnt << "\n";
	return 0;
}