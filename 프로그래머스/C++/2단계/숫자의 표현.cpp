#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int start = 1, end = 1, sum = 1;
    
    if(n == 1)
        return 1;
   
    // end의 위치가 n 이하일 경우
    while(end <= n){
        // start와 end 사이의 값의 합이 n보다 작으면 end++
        if(sum < n){
            end++;
            sum += end;
        }
        // 합이 n보다 크면 start++
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
