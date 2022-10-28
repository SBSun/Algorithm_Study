#include <iostream>
#include <algorithm>

using namespace std;

int n, x, y, cnt, a[100][100]; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 색종이 개수 
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		
		for(int j = x; j < x + 10; j++){
			for(int k = y; k < y + 10; k++){
				if(!a[j][k]){
					cnt++;
					a[j][k] = 1;
				}
			}
		}
	} 
	
	cout << cnt;

	return 0;
}
