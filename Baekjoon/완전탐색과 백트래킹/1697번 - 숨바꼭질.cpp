#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
const int MAX = 100000;
int n, m;
int visited[MAX + 1];
queue<int> q;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	if (n == m) {
		cout << 0 << "\n";
		return 0;
	}
	visited[n] = 1;
	q.push(n);
	while (q.size()) {
		int now = q.front();
		q.pop();
		for (int next : {now - 1, now + 1, now * 2}) {
			if (0 <= next && next <= MAX) {
				if (!visited[next]) {
					q.push(next);
					visited[next] = visited[now] + 1;
				}
			}
		}
	}
	cout << visited[m] - 1 << "\n";
	return 0;
}