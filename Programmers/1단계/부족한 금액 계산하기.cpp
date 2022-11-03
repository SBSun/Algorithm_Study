#include <iostream>
#include <vector>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;

    answer = (count * (1 + count) / 2) * price;
    answer *= price;
    answer -= money;

    if (answer <= 0)
        answer = 0;
    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cout << solution(3, 20, 4);
    return 0;
}	