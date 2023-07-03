#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int start = 1, end = 1, sum = 1;
    
    if(n == 1)
        return 1;
   
    // end�� ��ġ�� n ������ ���
    while(end <= n){
        // start�� end ������ ���� ���� n���� ������ end++
        if(sum < n){
            end++;
            sum += end;
        }
        // ���� n���� ũ�� start++
        else if(sum > n){
            sum -= start;
            start++;
        }else{
            answer++;
            end++;
            sum += end;
        }
    }
    
    
    return answer;
}
