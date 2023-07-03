#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n, ret;
priority_queue<int, vector<int>, greater<>> pq;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	while (n--) {
		int card;
		cin >> card;
		pq.push(card);
	}

	while (pq.size() - 1) { // queue ���� ��Ұ� 1���� ���� ������ �ݺ�
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		ret += a + b;
		pq.push(a + b);
	}

	cout << ret << "\n";
	return 0;
}