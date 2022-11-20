#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int l = 0, r = people.size() - 1;

    sort(people.begin(), people.end());

    while (l <= r) {
        // 가장 작은 값과 큰 값을 더한 값이 limit보다 작거나 같으면 
        if (people[l] + people[r] <= limit) {
            l++;
        }
        r--;
        answer++;
    }
    

    return answer;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    cout << solution({70, 80, 50}, 100) << "\n";

    return 0;
}