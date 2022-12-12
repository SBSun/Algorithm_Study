#include <iostream>
#include <algorithm>

using namespace std;

int x, cnt; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);	
	
	cin >> x;
	
	for(int i = 0; i <= 7; i++){ // 2^7 -> 64±îÁö 
		if(x & (1 << i))
		{
			x -= (1 << i); 
			cnt++;
		}
		
		if(x == 0)
			break;
	}
	
	cout << cnt << "\n";
	
	return 0;
}
