#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int a[100001];
int n, front_idx, back_idx, sum, minSum = 1000000000;
pair<int, int> res;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	front_idx = 0;
	back_idx = n - 1;
	sum = 0;
	sort(a, a + n);

	while (front_idx < back_idx) {
		sum = a[front_idx] + a[back_idx];

		if (minSum > abs(sum)) {
			minSum = abs(sum);
			res.first = a[front_idx];
			res.second = a[back_idx];

			if (sum == 0)
				break;
		}
		
		if (sum > 0)
			back_idx--;
		else
			front_idx++;
	}

	cout << res.first << " " << res.second << "\n";
	return 0;
}