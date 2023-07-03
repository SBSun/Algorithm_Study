#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int answer = 0;

void dfs(vector<int> numbers, int target, int sum, int index) {
	// ��� ���ҵ��� ��ȸ�Ҷ����� �ݺ�
	if (index == numbers.size()) {
		// �հ谡 Ÿ�� �ѹ��� ������
		if (sum == target) {
			answer++;
		}
		return;
	}
	// �� ���ҵ��� ���ϰų�	����.
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