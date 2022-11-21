#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer;

	for (int i = 0; i < arr1.size(); i++) {
		vector<int> v;
		for (int j = 0; j < arr2[0].size(); j++) {
			int sum = 0;
			for (int k = 0; k < arr1[0].size(); k++) {
				sum += arr1[i][k] * arr2[k][j];
			}
			v.push_back(sum);
		}
		answer.push_back(v);
	}

	return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<vector<int>> v = solution({ {1,4},{3,2 },{4,1} }, { {3,3},{3,3} });
	
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}