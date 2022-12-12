#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>
#include <string>
using namespace std;

const int max_size = 104;
const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0 , -1 };

char maze[max_size][max_size];
int visited[max_size][max_size];
int n, m, curY, curX;

int BFS(int startY, int startX, int endY, int endX) {
	queue<pair<int, int>> q;
	visited[startY][startX] = 1; // ���� ��ǥ �湮 ó��
	q.push({startY, startX});

	while (q.size()) {
		tie(curY, curX) = q.front(); // curY, curX�� q�� ����� ù��° ��ǥ�� �Ҵ�
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nextY = curY + dy[i]; // ���� �湮�� ��ǥ ����
			int nextX = curX + dx[i];
			// ���� ����ų� �̵� �Ұ����� ��ǥ�� ��� 
			if (nextY < 0 || nextY >= n || nextX < 0 || nextX >= m || maze[nextY][nextX] == '0')
				continue;
			// �̹� �湮�� ��ǥ�� ���
			if (visited[nextY][nextX])
				continue;
			// ó�� �湮�� ��ǥ�� ��� ���� ��ǥ�κ��� ���� ��ǥ������ �Ÿ� + 1���� �Ҵ����ش�.
			visited[nextY][nextX] = visited[curY][curX] + 1;
			q.push({ nextY, nextX }); // ������ �̵��� ��ǥ �߰�
		}
	}

	return visited[endY][endX];
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];
		}
	}

	cout << BFS(0, 0, n - 1, m - 1) << "\n";

	return 0;
}