#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;

    for (int i = 0; i < numbers.size(); i++) {
        answer -= numbers[i];
    }

    /* 또다른 풀이
        return 45 - accumulate(numbers.begin(), numbers.end(), 0);
    */
    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cout << solution({ 5,8,4,0,6,7,9 });
    return 0;
}	