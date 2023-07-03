#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> node[10002];
bool visited[10002];
int result = 0, endPoint = 0;

// 
void dfs(int p, int len) {
	// �ش� ������ �湮������
	if (visited[p])
		return;
	// �湮ó��
	visited[p] = true;
	// �ִ���̺��� ũ��
	if (result < len) {
		result = len;
		// ���� �ָ��ִ� ���� ����
		endPoint = p;
	}
	// �ش� ������ ������ ���� ����ŭ �ݺ�
	for (int i = 0; i < node[p].size(); i++) {
		dfs(node[p][i].first, len + node[p][i].second);	
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		// a�� b����� ����� ������ ����ġ ����
		node[a].push_back({ b, c });
		node[b].push_back({ a, c });
	}

	dfs(1, 0);

	return 0;
}