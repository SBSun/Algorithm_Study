#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define prev aaa
using namespace std;

const int MAX = 200001;
int visited[MAX], prev[MAX], n, m, here, ret;
vector<int> v;
queue<int> q;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	visited[n] = 1;
	q.push(n);
	while (q.size()) {
		here = q.front();
		q.pop();
		// 동생 위치에 도착하면 종료
		if (here == m) {
			ret = visited[m];
			break;
		}
		for (int next : {here + 1, here - 1, here * 2}) {
			// 오버플로우 처리 및 방문한 곳 재방문 x
			if (next >= MAX || next < 0 || visited[next])
				continue;
			visited[next] = visited[here] + 1;
			// 경로 출력을 위하여 prev[next]에 here 대입
			prev[next] = here;
			q.push(next);
		}
	}
	// prev로 경로 삽입
	for (int i = m; i != n; i = prev[i])
		v.push_back(i);
	v.push_back(n);
	reverse(v.begin(), v.end());
	cout << ret - 1 << "\n";
	for (int i : v) 
		cout << i << " ";
	return 0;
}