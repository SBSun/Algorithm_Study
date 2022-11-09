#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> node[10002];
bool visited[10002];
int result = 0, endPoint = 0;

// 
void dfs(int p, int len) {
	// 해당 정점을 방문했으면
	if (visited[p])
		return;
	// 방문처리
	visited[p] = true;
	// 최대길이보다 크면
	if (result < len) {
		result = len;
		// 가장 멀리있는 정점 설정
		endPoint = p;
	}
	// 해당 정점과 인접한 정점 수만큼 반복
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
		// a와 b노드의 양방향 간선과 가중치 설정
		node[a].push_back({ b, c });
		node[b].push_back({ a, c });
	}

	dfs(1, 0);

	return 0;
}