#include <iostream>
#include <algorithm>

using namespace std;

int n, m, a[101][101];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				int input;
				cin >> input;
				a[j][k] += input;
			}
		}
	}
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
