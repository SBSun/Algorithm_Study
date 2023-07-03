#include <iostream>
#include <algorithm>

using namespace std;

int x, y, res; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	res = -1;
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			int n;
			cin >> n;

			if(n > res){
				res = n;
				x = i + 1;
				y = j + 1;
			}
		}
	}
	
	cout << res << "\n" << x << " " << y;	

	return 0;
}
