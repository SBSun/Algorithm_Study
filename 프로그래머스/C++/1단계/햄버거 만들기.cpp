#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
	int answer = 0;
	
	vector<int> v;

	for (int a : ingredient) {
		v.push_back(a);

		if (v.size() >= 4) {
			int next_ingredient1 = v[v.size() - 4];
			int next_ingredient2 = v[v.size() - 3];
			int next_ingredient3 = v[v.size() - 2];
			int next_ingredient4 = v[v.size() - 1];

			if (next_ingredient1 == 1 && next_ingredient2 == 2 && next_ingredient3 == 3 && next_ingredient4 == 1)
			{
				answer++;
				for (int i = 0; i < 4; i++)
					v.pop_back();
			}
		}
	}

	return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v{ 2, 1, 1, 2, 3, 1, 2, 3, 1 };

	cout << solution(v);
    return 0;
}	