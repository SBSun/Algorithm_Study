#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;

    while (a != b) {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        answer++;
    }

    return answer;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    cout << solution(8, 4, 7) << "\n";

    return 0;
}