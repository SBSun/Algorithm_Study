#include <iostream>

using namespace std;

int n, m, j, l, r, res, temp;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m >> j;

	l = 1; // 바구니의 시작점

	for (int i = 0; i < j; i++) {
		// 바구니의 가장 왼쪽 위치 + 바구니의 칸 수 - 1
		r = l + m - 1;
		cin >> temp;
		// 현재 바구니 위치에 떨어지면 이동하지 않아도 됨
		if (temp >= l && temp <= r)
			continue;
		else {
			// 바구니 왼쪽에 내려온다면
			if (temp < l) {
				res += (l - temp);
				l = temp;
			}
			// 바구니 오른쪽에 내려온다면
			else {
				l += (temp - r);
				res += (temp - r);
			}
		}
	}

	cout << res;
    return 0;
}	