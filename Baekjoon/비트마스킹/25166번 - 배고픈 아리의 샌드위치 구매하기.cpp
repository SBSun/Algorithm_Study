#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int S, M;
string ret;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);	
	
	cin >> S >> M;
	
	if(S <= 1023)
		ret = "No thanks";
	else{ // Äí±â¿¡°Ô µ·À» ºô·Á¾ßÇÑ´Ù. 
		S -= 1023;
		bool flag = true; 
		for(int i = 0; i <= 10; i++){ // 10ºñÆ® 
			bool f1 = S & (1 << i);
			bool f2 = M & (1 << i);
			
			if(f1 && !f2)
				flag = false;
		}
		
		if(flag)
			ret = "Thanks";
		else
			ret = "Impossible";
	}
	cout << ret << "\n";
	return 0;
}
