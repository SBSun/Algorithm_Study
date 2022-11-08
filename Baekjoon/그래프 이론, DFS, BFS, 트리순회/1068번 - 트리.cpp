#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, r, temp, root;
vector<int> adj[54];

int DFS(int here) {
	// ���� ����� ��
	int ret = 0;
	int child = 0;

	for (int there : adj[here]) {
		// ������ ����� Ž�� X
		if (there == r)
			continue;

		ret += DFS(there);
		child++;
	}

	// ���� ����̸�
	if (child == 0)
		return 1;

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;

		if (temp == -1)
			root = i;
		// ���� ����Ʈ
		else {
			// temp �������� i ���� ����
			adj[temp].push_back(i);
		}

	}

	cin >> r;

	if (r == root) {
		cout << 0 << "\n";
	}
	else {
		cout << DFS(root) << "\n";
	}

	return 0;
}
