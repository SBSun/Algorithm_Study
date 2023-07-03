#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> v;
int _rank[51];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int h, w;
		cin >> h >> w;
		v.push_back({ h, w });
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;

			// 작으면 등수를 높인다.
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				_rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << _rank[i] + 1 << "\n";
	}

	return 0;
}