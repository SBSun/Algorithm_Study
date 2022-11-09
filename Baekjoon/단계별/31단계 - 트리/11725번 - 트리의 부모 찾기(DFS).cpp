#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 100001
using namespace std;

int n;
int ret[MAX];
bool visited[100001];
vector<int> v[MAX];

void dfs(int here) {
	// �湮ó��
	visited[here] = true;

	// here ���� ������ ������ ����ŭ �ݺ�
	for (int i = 0; i < v[here].size(); i++) {
		int next = v[here][i];

		// �湮���� �ʾ�����
		if (!visited[next]) {
			// �θ� ��� ����
			ret[next] = here;
			dfs(next);		
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1);

	for (int i = 2; i <= n; i++) {
		cout << ret[i] << "\n";
	}
	return 0;
}