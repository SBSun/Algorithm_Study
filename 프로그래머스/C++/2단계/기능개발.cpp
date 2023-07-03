#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	
	int day = 0;
	int max_day = 0;

	for (int i = 0; i < progresses.size(); i++) {
		// 각 기능이 몇일 뒤에 배포 가능한지 계산
		day = (99 - progresses[i]) / speeds[i] + 1;
		
		// max_day보다 개발기간이 더 필요하면 다음으로 미뤄진다.
		if (answer.empty() || max_day < day) {
			answer.push_back(1);
			max_day = day;
		}
		else {
			// max_day 기간내에 배포가 가능한 기능이면 추가
			answer.back()++;
		}
	}

	return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<int> v = solution({ 93, 30, 55 }, { 1, 30, 5 });

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}