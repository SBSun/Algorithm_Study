#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
int n, m, k, visited[10][10];
char a[10][10];
string s;

int dfs(int y, int x) {
	// �������� ����������
	if (y == 0 && x == m - 1) {
		// ��������� ���������� �Ÿ��� k�� 
		if (k == visited[y][x])
			return 1;
		return 0;
	}

	int ret = 0;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		// ���� ����ų� �湮�ߴ� ���̰ų� �̵������� ������ �ƴϰų�
		if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] || a[ny][nx] == 'T')
			continue;

		visited[ny][nx] = visited[y][x] + 1; // �Ÿ� �Ҵ�
		ret += dfs(ny, nx);
		visited[ny][nx] = 0;
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++) {
			a[i][j] = s[j];
		}
	}

	// ���� ��ġ 1�� ����
	visited[n - 1][0] = 1;	

	cout << dfs(n - 1, 0) << "\n";

	return 0;
}