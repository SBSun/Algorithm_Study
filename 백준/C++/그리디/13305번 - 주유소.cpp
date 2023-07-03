#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100001;
int n, road[MAX], cost[MAX], ret, m;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		cin >> road[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> cost[i];
	}

	m = cost[0];
	for (int i = 0; i < n - 1; i++) {
		if (cost[i] < m) // 최저 가격 갱신
			m = cost[i];
		ret += m * road[i];
	}
	cout << ret << "\n";
	return 0;
}