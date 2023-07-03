#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

vector<pair<int, int>> v[100001];
bool visited[100001];
int n, res, endPoint;

void dfs(int here, int len) {
	if (visited[here])
		return;

	visited[here] = true;

	if (res < len) {
		res = len;
		endPoint = here;
	}

	for (int i = 0; i < v[here].size(); i++) {
		dfs(v[here][i].first, len + v[here][i].second);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		while (true) {
			int b, c;
			cin >> b;
			if (b == -1)
				break;
			cin >> c;
			v[a].push_back({ b, c });
			v[b].push_back({ a, c });
		}
	}

	dfs(1, 0);

	memset(visited, false, sizeof(visited));
	res = 0;

	dfs(endPoint, 0);
	cout << res;
	return 0;
}