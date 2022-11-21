#include <iostream>
#include <algorithm>

using namespace std;

int a[9],n;
bool visited[9];

void makePermutation(int depth) {
	if (depth == n) {
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		if (visited[i])
			continue;
		visited[i] = true;
		a[depth] = i + 1;
		makePermutation(depth + 1);
		visited[i] = false;
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}

	makePermutation(0);
	return 0;
}