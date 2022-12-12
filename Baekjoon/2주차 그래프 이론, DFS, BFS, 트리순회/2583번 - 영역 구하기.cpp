#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int map_size = 101;
const int dy[4] = { -1, 0, 1, 0 }, dx[4] = { 0, 1, 0, -1 };

int a[map_size][map_size];
bool visited[map_size][map_size];
int m, n, k;
vector<int> res;

int DFS(int startY, int startX) {
	visited[startY][startX] = 1;
	int res = 1;
	for (int i = 0; i < 4; i++) {
		int nextY = startY + dy[i];
		int nextX = startX + dx[i];

		if (nextY < 0 || nextX < 0 || nextY >= m || nextX >= n || visited[nextY][nextX] == 1)
			continue;

		if (a[nextY][nextX] == 0)
		{
			res += DFS(nextY, nextX);
		}
	}

	return res;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m >> n >> k;

	for (int i = 0; i < k; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				a[y][x] = 1;
			}
		}
	}
;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] != 1 && visited[i][j] == 0) {
				res.push_back(DFS(i, j));
			}
		}
	}

	sort(res.begin(), res.end());
	cout << res.size() << "\n";
	for (int a : res) {
		cout << a << " ";
	}
	return 0;
}	