#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, r, temp, root;
vector<int> adj[54];

int DFS(int here) {
	// 리프 노드의 수
	int ret = 0;
	int child = 0;

	for (int there : adj[here]) {
		// 제거한 노드라면 탐색 X
		if (there == r)
			continue;

		ret += DFS(there);
		child++;
	}

	// 리프 노드이면
	if (child == 0)
		return 1;

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;

		if (temp == -1)
			root = i;
		// 인접 리스트
		else {
			// temp 정점에서 i 정점 연결
			adj[temp].push_back(i);
		}

	}

	cin >> r;

	if (r == root) {
		cout << 0 << "\n";
	}
	else {
		cout << DFS(root) << "\n";
	}

	return 0;
}
