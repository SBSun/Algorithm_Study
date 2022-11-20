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
		// ������ turn ��ŭ ������
		m += turn;
		if (m > MAX)
			break;

		// ������ ��ġ�� �̸� �湮�� �ߴٸ� 
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

				// ���� ¦����� ���� Ȧ�� ��ġ�� + 1, ���� Ȧ����� ���� ¦�� ��ġ�� + 1
				visited[turn % 2][next] = visited[(turn + 1) % 2][here] + 1;

				// �����̰� �̵��� ���� ������ �ִٸ�
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