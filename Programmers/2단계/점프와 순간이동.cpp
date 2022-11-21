#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n)
{
	int ans = 0;

	while (n > 0) {
		// 짝수면 순간이동
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			// 홀수면 -1하여 짝수로 만들어준다.
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