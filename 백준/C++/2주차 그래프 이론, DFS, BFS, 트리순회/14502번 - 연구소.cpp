#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int n, m, a[10][10];
vector<pair<int, int>> v;

bool vis[10][10];

void dfs(int x, int y) {
	if (a[x][y] == 1 || vis[x][y])
		return;
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
			continue;
		}
		dfs(nx, ny);
	}
}

int solve() {
	// �湮 �ʱ�ȭ
	memset(vis, 0, sizeof(vis));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// ���̷��� Ÿ���̸� ���̷��� ������ dfs����
			if (a[i][j] == 2) dfs(i, j);
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// �湮���� ���� Ÿ���̰� ��ĭ�̸� �߰�
			if (!vis[i][j] && a[i][j] == 0)
				ans++;
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			// ���� ����� �ִ� ��ĭ�̸� �߰�
			if (!a[i][j])
				v.push_back({ i, j });
		}
	}

	int ans = 0;

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				// 3���� �� �����
				a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 1;
				ans = max(ans, solve());
				// ������ �� 3�� ����
				a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 0;
			}
		}
	}
	cout << ans;
	return 0;
}