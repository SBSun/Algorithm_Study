#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
const int INF = 987654321;
char a[1001][1001];
int n, m, sx, sy, ret;
int fire_check [1001][1001], person_check[1001][1001];
const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	queue<pair<int, int>> q;
	cin >> n >> m;

	fill(&fire_check[0][0], &fire_check[0][0] + 1001 * 1001, INF);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			// ���� ������
			if (a[i][j] == 'F') {
				fire_check[i][j] = 1;
				q.push({ i, j });
			}
			// �����̴� 1��
			else if (a[i][j] == 'J') {
				sy = i;
				sx = j;
			}
		}
	}

	// �� �ִܰŸ� ����
	while (q.size()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			// �����÷ο� üũ
			if (ny < 0 || nx < 0 || ny >= n || nx >= m)
				continue;
			// �� �Ǵ� �� üũ
			if (fire_check[ny][nx] != INF || a[ny][nx] == '#')
				continue;

			fire_check[ny][nx] = fire_check[y][x] + 1;
			q.push({ ny, nx });
		}
	}

	person_check[sy][sx] = 1;
	q.push({ sy, sx });
	while (q.size()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		
		// �׵θ� �˻�
		if (x == m - 1 || y == n - 1 || x == 0 || y == 0) {
			ret = person_check[y][x];
			break;
		}

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= m)
				continue;
			// �湮�� ���̰ų� ���̸�
			if (person_check[ny][nx] || a[ny][nx] == '#')
				continue;
			// ���� �����̺��� ������
			if (fire_check[ny][nx] <= person_check[y][x] + 1)
				continue;

			person_check[ny][nx] = person_check[y][x] + 1;
			q.push({ ny, nx });
		}
	}

	if (ret != 0) 
		cout << ret << "\n";
	else 
		cout << "IMPOSSIBLE \n";
	return 0;
}