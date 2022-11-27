#include <iostream>
#include <algorithm>

using namespace std;
const int MAX = 101;
int n, l, ret, a[MAX][MAX], b[MAX][MAX];

void solve(int a[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		int j;
		for (j = 0; j < n - 1; j++) {
			if (a[i][j] == a[i][j + 1]) // 현재 칸과 다음 칸의 높이가 같으면
				cnt++;
			// 다음 칸이 1칸 높은 곳이고 l사이즈의 경사로를 설치할 수 있으면
			else if (a[i][j] + 1 == a[i][j + 1] && cnt >= l)
				cnt = 1;
			// 다음 칸이 1칸 낮은 곳이고 현재 내리막길을 내려가는 중이 아니라면
			else if (a[i][j] - 1 == a[i][j + 1] && cnt >= 0)
				cnt = -l + 1; // n - 1까지기 때문에 -l이 아닌 -l + 1
			else
				break;
		}
		if (j == n - 1 && cnt >= 0)
			ret++;
	}
	return;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> l;

	for (int i = 0; i < n; i++) {		// 대칭행렬
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			b[j][i] = a[i][j];
		}
	}
	solve(a);
	solve(b);
	cout << ret << "\n";

	return 0;
}