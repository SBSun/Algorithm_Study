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
	// ��Ʈ ���
	ret[1] = 1;
	q.push(1);

	// queue�� ��Ұ� �������� ���� ������ �ݺ�
	while (!q.empty()) {
		int here = q.front();
		q.pop();

		// ���� ��忡�� ������ ���� ����ŭ �ݺ�
		for (int i = 0; i < v[here].size(); i++) {
			int next = v[here][i];

			// ���� ����� �θ� ���� next�� ���ٸ� Ž�� x
			if (ret[here] == next)
				continue;

			// Ž���� ��� �߰�
			q.push(next);
			// ���� ��带 Ž���� ����� �θ� ���� ����
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