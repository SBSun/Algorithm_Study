#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;
int n;

bool compare(pair<int, int> &a, pair<int, int> &b) {
	if (a.second < b.second) {
		return true;
	}
	else if (a.second == b.second) {
		if (a.first < b.first) {
			return true;
		}
		else
			return false;
	}

	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		v.push_back(make_pair(num1, num2));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}	