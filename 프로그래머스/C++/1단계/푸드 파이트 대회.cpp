#include <iostream>
#include <vector>

using namespace std;

string solution(vector<int> number) {
	string answer = "0";

	for (int i = number.size() - 1; i > 0; i--) {
		int cnt = number[i] / 2;
		char c = i + '0';
		for (int j = 0; j < cnt; j++) {
			answer = c + answer;
			answer += c;
		}
	}
	return answer;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v{ 1, 3, 4, 6};

	cout << solution(v);
    return 0;
}	