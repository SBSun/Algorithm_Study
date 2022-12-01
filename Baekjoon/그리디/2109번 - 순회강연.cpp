#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq; // ������������ ����
vector<pair<int, int>> v;
int n, p, d, ret;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p >> d;
		v.push_back({ d, p }); // day������ �����ϱ� ���� �ݴ�� ����
	}	
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		pq.push(v[i].second); // ���� 
		ret += v[i].second;

		if (pq.size() > v[i].first) { // pq�� ��� ���� v[i] ��¥ ���� ũ��
			ret -= pq.top(); // ���� ���� ������ ���ش�.
			pq.pop();
		}
	}
	cout << ret << "\n";
	return 0;
}