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
		// 현재 queue에 m번째에 저장되어 있는 문서가 몇번째로 출력되는지
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

			// 중요도 값 비교
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