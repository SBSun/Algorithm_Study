#include <string>
#include <vector>

using namespace std;

/* �� ����� �ڵ�  
#include <bitset>

using namespace std;

int solution(int n) {
    int num = bitset<20>(n).count();

    while (bitset<20>(++n).count() != num);
    return n;
}
*/

int solution(int n) {
    // n���� ū �ڿ��� && 2������ ��ȯ���� �� 1�� ������ ���� ��
    int answer = 0;
    int temp = n;
    int n_cnt = 0, temp_cnt;
    while(temp != 0){
        n_cnt += temp % 2;
        temp /= 2;
    }
    
    while(1){
        n = n + 1;
        temp = n;
        temp_cnt = 0;
        while(temp != 0){
            temp_cnt += temp % 2;
            temp /= 2;
            
            if(temp_cnt > n_cnt)
                break;
        }
        
        if(temp_cnt == n_cnt)
        {
            answer = n;
            break;
        }
    }
    return answer;
}
