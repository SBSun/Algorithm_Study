#include <iostream>
#include <algorithm>
using namespace std;
int N, M, cnt;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);	
	
	cin >> N;
	M = -N;
		
	for(int i = 0; i < 32; i++){
		if((M & 1) != (N & 1)) // ´Ù¸£¸é
			cnt++;
		N = N >> 1;
		M = M >> 1;	
	}
	
	cout << cnt << "\n";
	return 0;
}
