#include <iostream>
#include <algorithm>

using namespace std;

int s, m, input;
string order;

void add(int x){
	s |= (1 << x); // x ��° ��Ʈ �ѱ� 
}

void remove(int x){
	s &= ~(1 << x); // x ��° ��Ʈ ���� 
}

int check(int x){
	if(s & (1 << x)) // x ��° ��Ʈ�� �����ִ��� Ȯ�� 
		return 1;
	else 
		return 0;
}

void toggle(int x){
	s ^= (1 << x); // x ��° ��Ʈ�� ���������� ���� ���������� Ų��. (XOR)
}

void all(){
	s = (1 << 21) - 1; // x�� �ִ밪�� 20�̹Ƿ� (1 << 21 ) - 1
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
