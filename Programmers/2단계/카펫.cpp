#include <string>
#include <vector>

using namespace std;
/* 또다른 풀이  
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
    
    // 노란색 격자를 감싸려면 최소 3 x 3 크기여야 한다.
    for(int height = 3; ; height++){
        // 총 타일의 개수가 높이로 나누어 떨어지면
        if(!(tile % height)){
            // 가로 길이
            int width = tile / height;
            
            // 갈색이 테두리이기 때문에 
            if((height - 2) * (width - 2) == yellow){
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }
    return answer;
}
