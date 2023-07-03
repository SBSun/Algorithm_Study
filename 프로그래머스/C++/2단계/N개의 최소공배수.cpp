#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// �ִ�����
int gcd(int a, int b) {
    int A = max(a, b);
    int B = min(a, b);

    while (A % B != 0) {
        int R = A % B;
        A = B;
        B = R;
    }

    return B;
}
// �ּҰ���� = �� ���� �� / �ִ�����
int solution(vector<int> arr) {
    int answer = 0;
    
    answer = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        int GCD = gcd(answer, arr[i]);
        int LCM = answer * arr[i] / GCD;
        answer = LCM;
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    cout << solution({2, 6, 8, 14}) << "\n";

    return 0;
}