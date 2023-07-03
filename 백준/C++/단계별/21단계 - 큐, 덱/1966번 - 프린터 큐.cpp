#include <iostream>
#include <queue>
using namespace std;

int t, n, m, cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	while (t--) {
		// ���� queue�� m��°�� ����Ǿ� �ִ� ������ ���°�� ��µǴ���
		cin >> n >> m;
		cnt = 0;
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			q.push({ i,input });
			pq.push(input);
		}

		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();

			// �߿䵵 �� ��
			if (pq.top() == value) {
				pq.pop();
				++cnt;
				if (m == index) {
					cout << cnt << "\n";
					break;
				}
			}
			else
				q.push({ index, value });
		}
	}

	return 0;
}	