#include <iostream>

using namespace std;

int t, h, w, n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int floor, room;
		
		// 층 구하기
		floor = n % h;

		// 완벽히 나누어 떨어지면 최고층 배정
		if (floor == 0)
			floor = h;

		// 방 번호 구하기
		// (n - 1)는 n / h의 나머지 값 없이 딱 나눠 떨어질 경우를 대비
		room = (n - 1) / h + 1;
		cout << floor * 100 + room << "\n";
	}
	return 0;
}