#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(int left, int right) {
    int answer = 0;

    map<int, int> m;

    for (int i = left; i <= right; i++) {
        int cnt = 0;

        for (int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                cnt++;

                // 제곱 값이 i보다 작으면
                if (j * j < i) {
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
        if (cnt % 2 == 0)
            answer += i;
        else
            answer -= i;
    }

    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cout << solution(13, 17);

    return 0;
}	