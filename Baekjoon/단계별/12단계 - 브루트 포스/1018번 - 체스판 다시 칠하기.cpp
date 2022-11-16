#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int chess[51][51];
int n, m, _min = 2500;
int check(int x, int y)
{
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == chess[i][j]) // 탐색을 시작하는 첫번째 블록이 흰색 일때
				cnt1++;
			if ((i + j + 1) % 2 == chess[i][j]) // 탐색을 시작하는 첫번째 블록이 검정색 일때
				cnt2++;
		}
	}

	return min(cnt1, cnt2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) { // B는 '0', W는 '1'로 저장
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			if (c == 'B') chess[i][j] = 0;
			else chess[i][j] = 1;
		}
	}

	for (int i = 0; i <= n - 8; i++) { // check(x, y)함수에 탐색을 시작할 인덱스 전달
		for (int j = 0; j <= m - 8; j++) {
			if (_min > check(i, j)) 
				_min = check(i, j); // 가장 작은 값인지 판별
		}
	}

	cout << _min << "\n";
	return 0;
}