#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int answer = 0;

void dfs(vector<int> numbers, int target, int sum, int index) {
	// 모든 원소들을 순회할때까지 반복
	if (index == numbers.size()) {
		// 합계가 타켓 넘버와 같으면
		if (sum == target) {
			answer++;
		}
		return;
	}
	// 각 원소들을 더하거나	뺀다.
	dfs(numbers, target, sum + numbers[index], index + 1);	
	dfs(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
	dfs(numbers, target, 0, 0);

    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cout << solution({ 1, 1, 1, 1, 1 }, 3);

	return 0;
}