#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;

	for (int i = 2; i * i < n; i++) {
		if ((n - 1) % i == 0) {
			answer = i;
			break;
		}
	}

	if (answer == 0)
		answer = n - 1;
	return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << solution(12);
    return 0;
}	