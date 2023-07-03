#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
const int INF = 987654321;
int n, a[44], ret = INF;
string s;

void go(int here) {
	if (here == n + 1) {
		int sum = 0;
		// i가 1, 2, 4... 이런식으로 증가하며서 열 체크
		for (int i = 1; i <= (1 << (n - 1)); i *= 2) {
			int cnt = 0;
			for (int j = 1; j <= n; j++) {
				if (a[j] & i) // j행과 열의 i(1, 2, 4)값 비교
					cnt++; // T의 개수 추가
			}
			sum += min(cnt, n - cnt); // 뒤집었을 때의 개수와 비교하여 작은 개수 추가
		}
		ret = min(ret, sum); // 최저값 갱신
		return;
	}
	// 모든 경우의 수 체크
	go(here + 1);	// 안뒤집거나
	a[here] = ~a[here];	// 뒤집기
	go(here + 1);	// 뒤집거나
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		int value = 1;
		// H - 0, T - 1로 표현
	    // HHT -> 124 -> 4라는 숫자로 표현할 수 있다.
		for (int j = 0; j < s.size(); j++) { 
			if (s[j] == 'T') // T면 value 합치기
				a[i] |= value;
			value *= 2; 
		}
	}

	go(1);
	cout << ret << "\n";
	return 0;
}