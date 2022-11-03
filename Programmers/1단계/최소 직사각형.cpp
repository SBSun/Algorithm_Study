#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;

    int max_width = 0, max_height = 0;
    for (int i = 0; i < sizes.size(); i++) {
        int width = max(sizes[i][0], sizes[i][1]);
        int height = min(sizes[i][0], sizes[i][1]);

        max_width = max(max_width, width);
        max_height = max(max_height, height);
    }

    answer = max_width * max_height;
    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cout << solution({ {60, 50},{30,70},{60,30},{80,40} });
    return 0;
}	