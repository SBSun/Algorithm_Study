#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> citations) {
	int answer = 0;

	sort(citations.begin(), citations.end(), greater<int>());
	// 제일 큰 값이 0이라면 H-Index는 0이다.
	if (!citations[0])
		return 0;

	for (int i = 0; i < citations.size(); i++) {
		// H-index범위 안이라면
		if (citations[i] > i)
			answer++;
		else
			break;
	}

	return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	cout << solution({ 3, 0, 6, 1, 5 }) << "\n";


	return 0;
}