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
	visited[startY][startX] = 1; // 시작 좌표 방문 처리
	q.push({startY, startX});

	while (q.size()) {
		tie(curY, curX) = q.front(); // curY, curX를 q에 저장된 첫번째 좌표로 할당
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nextY = curY + dy[i]; // 다음 방문할 좌표 설정
			int nextX = curX + dx[i];
			// 맵을 벗어나거나 이동 불가능한 좌표일 경우 
			if (nextY < 0 || nextY >= n || nextX < 0 || nextX >= m || maze[nextY][nextX] == '0')
				continue;
			// 이미 방문한 좌표일 경우
			if (visited[nextY][nextX])
				continue;
			// 처음 방문한 좌표일 경우 시작 좌표로부터 현재 좌표까지의 거리 + 1값을 할당해준다.
			visited[nextY][nextX] = visited[curY][curX] + 1;
			q.push({ nextY, nextX }); // 다음에 이동할 좌표 추가
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