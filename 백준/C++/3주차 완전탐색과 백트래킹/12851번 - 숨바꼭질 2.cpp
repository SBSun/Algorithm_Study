#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

const int MAX = 100000;
int visited[MAX + 1], n, m;
long long cnt[MAX + 1];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	// 반례 - 처음부터 같은 위치에 있었을 경우
	if (n == m) {
		puts("0");
		puts("1");
		return 0;
	}
	visited[n] = 1;
	cnt[n] = 1;
	queue<int> q;
	q.push(n);
	while (q.size()) {
		int now = q.front();
		q.pop();
		for (int next : {now - 1, now + 1, now * 2}) {
			// 오버플로우 처리
			if (0 <= next && next <= MAX) {
				// 방문하지 않았다면
				if (!visited[next]) {
					visited[next] = visited[now] + 1;
					q.push(next);
					// next까지 갈 수 있는 경우의 수 더해주기
					cnt[next] += cnt[now];	
				}
				// next 정점으로 오는 시각이 최단거리라면 
				else if (visited[next] == visited[now] + 1) {
					cnt[next] += cnt[now];
				}
			}
		}
	}
	cout << visited[m] - 1 << "\n";
	cout << cnt[m] << "\n";

	return 0;
}