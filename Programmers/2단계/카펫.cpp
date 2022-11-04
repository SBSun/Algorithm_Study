#include <string>
#include <vector>

using namespace std;
/* �Ǵٸ� Ǯ��  
vector<int> solution(int brown, int red) {

    int len = brown / 2 + 2;

    int w = len - 3;
    int h = 3;

    while(w >= h){
        if(w * h == (brown + red)) break;

        w--;
        h++;
    }

    return vector<int>{w, h};
}
*/
vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int tile = brown + yellow;
    
    // ����� ���ڸ� ���η��� �ּ� 3 x 3 ũ�⿩�� �Ѵ�.
    for(int height = 3; ; height++){
        // �� Ÿ���� ������ ���̷� ������ ��������
        if(!(tile % height)){
            // ���� ����
            int width = tile / height;
            
            // ������ �׵θ��̱� ������ 
            if((height - 2) * (width - 2) == yellow){
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }
    return answer;
}
