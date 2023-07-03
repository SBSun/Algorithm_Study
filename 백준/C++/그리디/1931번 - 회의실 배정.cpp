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

	for (int i = 0; i < n; i++) { // ȸ�� ���� �Է�
		cin >> from >> to;
		timeList.push_back({ to, from }); // from ~ to�� �ݴ�� �����Ͽ� ��������
	}
	sort(timeList.begin(), timeList.end()); // ������ ���� ������ ã��

	from = timeList[0].second;
	to = timeList[0].first;
	for (int i = 1; i < n; i++) {
		if (timeList[i].second < to) // ���� ȸ���� ����ð��� ���� ȸ���� ���۽ð����� ũ��
			continue;
		from = timeList[i].second;
		to = timeList[i].first;
		ret++;
	}
	cout << ret << "\n";
	return 0;
}