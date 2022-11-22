#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct info {
    bool parking = false;
    int startTime = 0; // 입차한 시간
    int usedTime = 0;
    int price = 0;
};

int change(string s) {
    int hour = stoi(s.substr(0, s.find(":")));
    int minute = stoi(s.substr(s.find(":") + 1));
    return hour * 60 + minute;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    
    map<string, info> cars;

    int defaultTime = fees[0];
    int defaultPrice = fees[1];
    int unitTime = fees[2];
    int unitPrice = fees[3];

    for (int i = 0; i < records.size(); i++) {
        int index1, index2;
        index1 = records[i].find(' ');
        index2 = records[i].find(' ', index1 + 1);
        string time = records[i].substr(0, index1);
        string num = records[i].substr(index1 + 1, index2 - index1 - 1);

        // 주차 중이면 출차
        if (cars[num].parking) {
            cars[num].parking = false;
            cars[num].usedTime += change(time) - cars[num].startTime;
        }
        // 입차
        else {
            cars[num].parking = true;
            cars[num].startTime = change(time);
        }
    }

    for (pair<string, info> it : cars) {

        info _info = it.second;
        // 입차는 했는데 출차는 하지 않은 차량 처리
        if(_info.parking)
            _info.usedTime += change("23:59") - _info.startTime;

        _info.price += defaultPrice;
        _info.usedTime -= defaultTime;
        
        if (_info.usedTime > 0) {
            _info.price += _info.usedTime / unitTime * unitPrice;

            if (_info.usedTime % unitTime != 0)
                _info.price += unitPrice;
        }

        answer.push_back(_info.price);
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> v = solution({ 180, 5000, 10, 600 }, { "05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT" });

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}