#include <string>
#include <vector>

using namespace std;
/*
문제에서 1234567로 나눈 나머지를 정답으로 내놓으라는 것은 문제를 꼰 것이 아니라 
int 자료형의 범위 내에 항상 값이 있을 수 있도록 한 배려이며, 자
료형의 크기에 제한이 있는 언어를 쓸 경우 (A + B) % C ≡ ( ( A % C ) + ( B % C) ) % C라는 
성질을 이용해서 매번 계산 결과에 1234567으로 나눈 나머지를 대신 넣는 것으로 int 범위 내에 항상 값이 존재함을 보장할 수 있다. 
 
*/
int solution(int n) {
    int answer = 0;
    int fist = 0;
    int second = 1;

    for(int i=2; i<=n; i++)
    {
        answer = (fist+second)%1234567;
        fist = second;
        second = answer;
    }

    return answer;
}

