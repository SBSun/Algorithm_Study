#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 4000000

int n;
vector<bool> check;
vector<int> prime;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;

	check.resize(n + 1, 1);

	for (int i = 2; i * i <= n; i++) {
		if (!check[i])
			continue;

		// j는 i의 배수이기 때문에 소수 X
		for (int j = i + i; j <= n; j += i) {
			check[j] = false;
		}
	}

	// 소수가 맞으면 vector에 추가
	for (int i = 2; i < n + 1; i++) {
		if (check[i] == true)
			prime.push_back(i);
	}

	int cnt = 0, high = 0, low = 0, sum = 0;

	while (1) {
		// low부터 high까지의 소수 합이 n보다 크거나 같으면 low 값을 빼준다.
		if (sum >= n)
			sum -= prime[low++];
		// high의 인덱스가 소수의 개수와 같으면 종료
		else if (high == prime.size())
			break;
		// low부터 high까지의 소수 합이 n보다 작으면 high 값을 더해준다.
		else
			sum += prime[high++];

		if (sum == n) 
			cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
