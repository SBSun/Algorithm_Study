#include <string>
#include <vector>

using namespace std;
/*
�������� 1234567�� ���� �������� �������� ��������� ���� ������ �� ���� �ƴ϶� 
int �ڷ����� ���� ���� �׻� ���� ���� �� �ֵ��� �� ����̸�, ��
������ ũ�⿡ ������ �ִ� �� �� ��� (A + B) % C �� ( ( A % C ) + ( B % C) ) % C��� 
������ �̿��ؼ� �Ź� ��� ����� 1234567���� ���� �������� ��� �ִ� ������ int ���� ���� �׻� ���� �������� ������ �� �ִ�. 
 
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

