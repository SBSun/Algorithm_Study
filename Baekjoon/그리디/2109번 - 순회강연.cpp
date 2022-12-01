#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq; // 오름차순으로 정렬
vector<pair<int, int>> v;
int n, p, d, ret;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p >> d;
		v.push_back({ d, p }); // day순으로 정렬하기 위해 반대로 저장
	}	
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		pq.push(v[i].second); // 가격 
		ret += v[i].second;

		if (pq.size() > v[i].first) { // pq의 요소 수가 v[i] 날짜 보다 크면
			ret -= pq.top(); // 가장 낮은 가격을 빼준다.
			pq.pop();
		}
	}
	cout << ret << "\n";
	return 0;
}