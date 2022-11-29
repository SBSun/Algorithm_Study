#include <iostream>
#include <algorithm>

using namespace std;

int s, m, input;
string order;

void add(int x){
	s |= (1 << x); // x 번째 비트 켜기 
}

void remove(int x){
	s &= ~(1 << x); // x 번째 비트 끄기 
}

int check(int x){
	if(s & (1 << x)) // x 번째 비트가 켜져있는지 확인 
		return 1;
	else 
		return 0;
}

void toggle(int x){
	s ^= (1 << x); // x 번째 비트가 켜져있으면 끄고 꺼져있으면 킨다. (XOR)
}

void all(){
	s = (1 << 21) - 1; // x의 최대값이 20이므로 (1 << 21 ) - 1
}

void empty(){
	s = 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);	
	
	cin >> m;
	
	while(m--){
		cin >> order;
		
		if(order == "add"){
			cin >> input;
			add(input);
		}
		else if(order == "remove"){
			cin >> input;
			remove(input);
		}
		else if(order == "check"){
			cin >> input;
			cout << check(input) << "\n";
		}
		else if(order == "toggle"){
			cin >> input;
			toggle(input);
		}
		else if(order == "all"){
			all();
		}
		else if(order == "empty"){
			empty();
		}
	}
	
	return 0;
}
