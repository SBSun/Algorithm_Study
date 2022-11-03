#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    map<int, int> m;
    int cnt_zero = 0;
    int cnt_same = 0;
    int max = 0, min = 0;
    for (int i = 0; i < lottos.size(); i++) {
        m[lottos[i]]++;
        m[win_nums[i]]++;
    }

    cnt_zero = m[0];
    m[0] = 0;
    for (auto p : m) {
        if (p.second == 2) {
            cnt_same++;
        }
    }

    max = 6 - cnt_zero - cnt_same + 1;
    min = 6 - cnt_same + 1;

    if (max > 6)
        max = 6;
    if (min > 6)
        min = 6;
 

    answer.push_back(max);
    answer.push_back(min);
    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    vector<int> res = solution({ 45, 4, 35, 20, 3, 9 }, { 20, 9, 3, 45, 4, 35 });
    cout << res[0] << " " << res[1] << "\n";

    return 0;
}	