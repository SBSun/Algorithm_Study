#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 100001
using namespace std;

int n;
int ret[MAX];
bool visited[100001];
vector<int> v[MAX];

void dfs(int here) {
	// 방문처리
	visited[here] = true;

	// here 노드와 인접한 정점의 수만큼 반복
	for (int i = 0; i < v[here].size(); i++) {
		int next = v[here][i];

		// 방문하지 않았으면
		if (!visited[next]) {
			// 부모 노드 설정
			ret[next] = here;
			dfs(next);		
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1);

	for (int i = 2; i <= n; i++) {
		cout << ret[i] << "\n";
	}
	return 0;
}