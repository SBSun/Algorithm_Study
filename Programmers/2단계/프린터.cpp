#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0, cnt = 0;
	queue<pair<int, int>> q;
	priority_queue<int> pq;

	for (int i = 0; i < priorities.size(); i++) {
		q.push({ i, priorities[i] });
		pq.push(priorities[i]);
	}

	while (q.size()) {
		int index = q.front().first;
		int value = q.front().second;
		q.pop();
		// 가장 높은 중요도라면 인쇄
		if (pq.top() == value) {
			pq.pop();
			cnt++;
			// 요청한 문서의 index라면
			if (index == location) {
				answer = cnt;
				break;
			}
		}
		else {
			// q 맨 뒤에 다시 삽입해준다.
			q.push({ index, value });
		}
	}
	return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cout << solution({ 2, 1, 3, 2 }, 2) << "\n";
	
	return 0;
}