#include <iostream>

using namespace std;

int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (cin >> n) {
		int cnt = 1, ret = 1;

		while (true) {
			// cnt는 1, 11, 111, 1111... 씩 증가하는 변수
			// 입력한 값과 나누어 떨어진다면 cnt의 자릿수 ret 출력
			if (cnt % n == 0) {
				cout << ret << "\n";
				break;
			}
			else {
				// 나누어 떨어지지 않는다면 cnt를 1자리수 씩 늘리면서 체크
				// cnt가 1일 때 : (1 * 10) + 1 = 11, 그 다음에는 (11 * 10) + 1 = 111
				cnt = (cnt * 10) + 1;
				// cnt의 자릿수가 늘어 int 범위를 초과하면 안되므로 n을 나눈 나머지값으로 설정
				cnt %= n;
				// 자릿수 증가
				ret++;
			}
		}
	}

	return 0;
}	