#include <iostream>
#include <vector>

using namespace std;


int solution(vector<int> number) {
	int answer = 0;
	for (int i = 0; i < number.size() - 2; i++) {
		for (int j = i + 1; j < number.size() - 1; j++) {
			for (int k = j + 1; k < number.size(); k++) {
				if (number[i] + number[j] + number[k] == 0)
					answer++;
			}
		}
	}
	return answer;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v{ -3, -2, -1, 0, 1, 2, 3 };

	cout << solution(v);
    return 0;
}	