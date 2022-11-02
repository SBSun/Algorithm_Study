	#include <iostream>

	using namespace std;

	const int max_size = 101;
	const int dy[4] = { -1, 0, 1, 0 };
	const int dx[4] = { 0, 1, 0, -1 };

	int a[max_size][max_size];
	bool visited[max_size][max_size];
	int n, nextY, nextX, cnt, res = 1;

	void DFS(int startY, int startX, int d) {
		visited[startY][startX] = 1;

		for (int i = 0; i < 4; i++) {
			nextY = startY + dy[i];
			nextX = startX + dx[i];

			if (nextY < 0 || nextY >= n || nextX < 0 || nextX >= n)
				continue;

			if (!visited[nextY][nextX] && a[nextY][nextX] > d) {
				DFS(nextY, nextX, d);
			}
		}

		return;
	}

	int main() {
		ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		cin >> n;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}

		for (int d = 1; d < 101; d++) {
			cnt = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (!visited[i][j] && a[i][j] > d) {
						DFS(i, j, d);
						cnt++;
					}
				}
			}

			fill(&visited[0][0], &visited[0][0] + max_size * max_size, 0);
			res = max(res, cnt);
		}

		cout << res;
		return 0;
	}	