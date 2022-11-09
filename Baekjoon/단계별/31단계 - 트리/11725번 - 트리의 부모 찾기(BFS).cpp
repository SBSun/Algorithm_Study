#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 100001
using namespace std;

int n;
int ret[MAX];
vector<int> v[MAX];

void bfs() {
	queue<int> q;	
	// 루트 노드
	ret[1] = 1;
	q.push(1);

	// queue에 요소가 존재하지 않을 때까지 반복
	while (!q.empty()) {
		int here = q.front();
		q.pop();

		// 현재 노드에서 인접한 정점 수만큼 반복
		for (int i = 0; i < v[here].size(); i++) {
			int next = v[here][i];

			// 현재 노드의 부모 노드와 next가 같다면 탐색 x
			if (ret[here] == next)
				continue;

			// 탐색할 노드 추가
			q.push(next);
			// 현재 노드를 탐색할 노드의 부모 노드로 설정
			ret[next] = here;
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

	bfs();

	for (int i = 2; i <= n; i++) {
		cout << ret[i] << "\n";
	}

	return 0;
}