#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 51;
int n, ret;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());	

	for (int i = 0; i < n; i++) {
		int max_index = max_element(b.begin(), b.end()) - b.begin();
		ret += a[i] * b[max_index];
		b[max_index] = 0;
	}
	cout << ret << "\n";
	return 0;
}