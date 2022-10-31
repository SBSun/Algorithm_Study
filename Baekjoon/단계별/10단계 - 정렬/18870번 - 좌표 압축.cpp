#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int> cv(v);
	// 오름차순 정렬
	sort(cv.begin(), cv.end());
	// 중복 제거
	cv.erase(unique(cv.begin(), cv.end()), cv.end());

	for (int i = 0; i < n; i++) {
		auto it = lower_bound(cv.begin(), cv.end(), v[i]);  // v[i]원소에 해당하는 값의 iterator를 반환

		cout << it - cv.begin() << " "; // 원소의 iterator값에서 vector 시작주소를 빼면 인덱스 값을 얻을 수 있음
	}
	return 0;
}	