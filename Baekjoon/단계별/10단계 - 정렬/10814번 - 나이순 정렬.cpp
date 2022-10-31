#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

bool compare(tuple<int, int, string> t1, tuple<int, int, string> t2) {
	if (get<1>(t1) == get<1>(t2))
	{
		if (get<0>(t1) < get<0>(t2))
			return true;
		else
			return false;
	}
	else
		return get<1>(t1) < get<1>(t2);
}

vector<tuple<int, int, string>> v;
int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;	

		v.push_back(make_tuple(i + 1, age, name));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << get<1>(v[i]) << " " << get<2>(v[i]) << "\n";
	}

	return 0;
}	