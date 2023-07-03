#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define prev aaa
using namespace std;

const int MAX = 500001;
int visited[2][MAX], n, m, ok, turn = 1	;
vector<int> v;
queue<int> q;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	if (n == m) {
		cout << 0 << "\n";
		return 0;
	}
	visited[0][n] = 1;
	q.push(n);

	while (q.size()) {
		// 동생이 turn 만큼 움직임
		m += turn;
		if (m > MAX)
			break;

		// 동생의 위치에 미리 방문을 했다면 
		if (visited[turn % 2][m]) {
			ok = true;
			break;
		}

		int qSize = q.size();
		for (int i = 0; i < qSize; i++) {
			int here = q.front();
			q.pop();
			for (int next : {here - 1, here + 1, here * 2}) {
				if (next < 0 || next >= MAX || visited[turn % 2][next])
					continue;

				// 현재 짝수라면 다음 홀수 위치에 + 1, 현재 홀수라면 다음 짝수 위치에 + 1
				visited[turn % 2][next] = visited[(turn + 1) % 2][here] + 1;

				// 수빈이가 이동한 곳에 동생이 있다면
				if (next == m) {
					ok = 1;
					break;
				}
				q.push(next);
			}

			if (ok)
				break;
		}
		if (ok)
			break;

		turn++;
	}

	if (ok)
		cout << turn << "\n";
	else
		cout << -1 << "\n";
	return 0;
}