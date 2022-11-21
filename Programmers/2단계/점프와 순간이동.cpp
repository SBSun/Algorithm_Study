#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n)
{
	int ans = 0;

	while (n > 0) {
		// ¦���� �����̵�
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			// Ȧ���� -1�Ͽ� ¦���� ������ش�.
			n -= 1;
			ans++;
		}
	}

	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cout << solution(5) << "\n";
	return 0;
}