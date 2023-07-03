#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> timeList;
int n, from, to, ret = 1;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;

	for (int i = 0; i < n; i++) { // 회의 정보 입력
		cin >> from >> to;
		timeList.push_back({ to, from }); // from ~ to를 반대로 삽입하여 오름차순
	}
	sort(timeList.begin(), timeList.end()); // 정렬을 통해 최적해 찾기

	from = timeList[0].second;
	to = timeList[0].first;
	for (int i = 1; i < n; i++) {
		if (timeList[i].second < to) // 현재 회의의 종료시간이 다음 회의의 시작시간보다 크면
			continue;
		from = timeList[i].second;
		to = timeList[i].first;
		ret++;
	}
	cout << ret << "\n";
	return 0;
}