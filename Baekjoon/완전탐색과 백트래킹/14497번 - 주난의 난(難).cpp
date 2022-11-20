#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define y1 aa
using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };
const int MAX = 301;
int n, m, x1, x2, y1, y2;
int visited[MAX][MAX];
char a[MAX][MAX];
queue<int> q;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	cin >> y1 >> x1 >> y2 >> x2;
	y1--; x1--; y2--; x2--;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	q.push(1000 * y1 + x1);
	visited[y1][x1] = 1;
	int cnt = 0;

	// �������� 0�� �ɶ����� �ݺ�
	while (a[y2][x2] != '0') {
		cnt++;
		queue<int> temp;
		while (q.size()) {
			int y = q.front() / 1000;
			int x = q.front() % 1000;
			q.pop();
			for (int i = 0; i < 4; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];

				if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx])
					continue;
				visited[ny][nx] = cnt;
				// 0�� �ƴ϶�� 0���� ���� �� �����Ͽ� �ٽ� Ž��
				if (a[ny][nx] != '0') {
					a[ny][nx] = '0';
					temp.push(1000 * ny + nx);
				}
				// 0�̶�� ��� Ž��
				else
					q.push(1000 * ny + nx);
			}
		}

		q = temp;
	}

	cout << cnt << "\n";
	return 0;
}