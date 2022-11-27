#include <iostream>
#include <algorithm>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 }, dx[4] = { 0, 1, 0, -1 };
int R, C, ret, ny, nx;
char a[21][21];

// y : 행 위치, x : 열 위치, num : 현재 좌표까지 오면서 밟았던 알파벳들의 정보, cnt : 이동 횟수
void dfs(int y, int x, int num, int cnt) {
	ret = max(ret, cnt);
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= R || nx >= C) continue;
		int _next = 1 << ((int)a[ny][nx] - 'A');
		if ((num & _next) == 0) { // 방문하지 않은 알파벳이라면
			dfs(ny, nx, num | _next, cnt + 1); // 방문했던 알파벳들 + next 좌표의 알파벳 
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> a[i][j];
		}
	}
	// 첫 좌펴에서 시작
	dfs(0, 0, 1 << ((int)a[0][0] - 'A'), 1);
	cout << ret << "\n";
	return 0;
}