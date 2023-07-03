#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
ll n, k, ret;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	vector<pair<ll, ll>> gem(n); // 보석 정보
	vector<ll> bag(k);			 // 가방 무게

	for (int i = 0; i < n; i++) {
		cin >> gem[i].first >> gem[i].second;
	}
	for (int i = 0; i < k; i++) {
		cin >> bag[i];
	}
	sort(gem.begin(), gem.end()); // 오름차순 정렬
	sort(bag.begin(), bag.end()); 
	priority_queue<ll> pq;

	int j = 0;
	for (int i = 0; i < k; i++) {
		while (j < n && gem[j].first <= bag[i]) { // 해당 가방에 보석을 담을 수 있으면
			pq.push(gem[j++].second); // 가장 무게가 많이 나가는 보석 담기
		}
		if (pq.size()) {
			ret += pq.top();
			pq.pop();
		}
	}
	cout << ret << "\n";
	return 0;
}