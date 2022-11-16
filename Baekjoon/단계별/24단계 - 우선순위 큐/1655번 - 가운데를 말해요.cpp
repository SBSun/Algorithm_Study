#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;


int n;
priority_queue<int> max_pq; // ��������
priority_queue<int, vector<int>, greater<int>> min_pq; // ��������
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		
		if (max_pq.size() > min_pq.size())
			min_pq.push(x);
		else
			max_pq.push(x);

		// �� ���� �켱����ť�� ���Ұ� ���������
		if (!max_pq.empty() && !min_pq.empty()) {
			// max_pq�� �ִ밪�� min_pq�� �ּҰ����� ũ��
			if (max_pq.top() > min_pq.top()){
				// ����
				int a = max_pq.top();
				max_pq.pop();
				int b = min_pq.top();
				min_pq.pop();
				
				max_pq.push(b);
				min_pq.push(a);
			}
		}

		cout << max_pq.top() << "\n";
	}
	
	return 0;
}