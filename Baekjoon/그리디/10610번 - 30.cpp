#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string n;
long long sum;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	sort(n.begin(), n.end(), greater<>());

	if (n.back() != '0')	// 마지막 숫자가 0이 아니라면
		cout << -1 << "\n";
	else {
		for (char c : n) {
			sum += c - '0';
		}

		if (sum % 3 == 0) // 각 자리의 총합이 3으로 나누어 떨어져야지 30의 배수가 된다.
			cout << n << "\n";
		else
			cout << -1 << "\n";
	}

	return 0;
}