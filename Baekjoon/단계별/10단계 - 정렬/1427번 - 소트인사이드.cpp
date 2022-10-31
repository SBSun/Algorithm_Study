#include <iostream>
#include <string>
using namespace std;

string n;
int a[10];
int temp, j;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n.length(); i++) {
		a[i] = n[i] - '0';
	}

	for (int i = 1; i < n.length(); i++) {
		// 키 값 설정
		temp = a[i];

		// 키 값의 인덱스보다 아래에 있는 요소들과 비교하여 밀어내기
		for (j = i - 1; j >= 0 && a[j] < temp; j--) {
			a[j + 1] = a[j];
		}
		// 키 값 위치 결정
		a[j + 1] = temp;
	}

	for (int i = 0; i < n.length(); i++) {
		cout << a[i];
	}

	return 0;
}	