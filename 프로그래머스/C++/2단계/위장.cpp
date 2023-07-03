#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	map<string, int> cloth;

	// �� �ǻ� Ÿ�Կ� ������ �����ش�
	for (int i = 0; i < clothes.size(); i++) {
		cloth[clothes[i][1]]++;
	}

	answer = 1;

	for (pair<string, int> it : cloth) {
		answer *= it.second + 1;
	}

	answer -= 1;

	return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cout << solution({ { "crow_mask", "face" }, { "blue_sunglasses", "face" }, { "smoky_makeup", "face" } });

	return 0;
}