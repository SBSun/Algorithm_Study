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
	// �ݷ� - ó������ ���� ��ġ�� �־��� ���
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
			// �����÷ο� ó��
			if (0 <= next && next <= MAX) {
				// �湮���� �ʾҴٸ�
				if (!visited[next]) {
					visited[next] = visited[now] + 1;
					q.push(next);
					// next���� �� �� �ִ� ����� �� �����ֱ�
					cnt[next] += cnt[now];	
				}
				// next �������� ���� �ð��� �ִܰŸ���� 
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