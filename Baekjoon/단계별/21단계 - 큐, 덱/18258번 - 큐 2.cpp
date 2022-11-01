#include <iostream>
#include <string.h>

using namespace std;
#define QUEUE_MAX_SIZE 2000001
int q[QUEUE_MAX_SIZE];
int n, queue_size, frontIndex = 0, backIndex = -1;
string s;

void push(int input){
	if(queue_size == QUEUE_MAX_SIZE)
		return;
		
	backIndex++;
	q[backIndex] = input;
	queue_size++;
}

int pop(){
	if(queue_size){
		int remove = q[frontIndex];
		queue_size--;
		frontIndex++;
		return remove;
	}else{
		return -1;
	}
}

int size(){
	return queue_size;
}

int empty(){
	if(queue_size){
		return 0;
	}else{
		return 1;
	}
}

int front(){
	if(queue_size){
		return q[frontIndex];
	}else{
		return -1;
	}
}

int back(){
	if(queue_size){
		return q[backIndex];
	}else{
		return -1;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	while(n--){
		cin >> s;
		
		if(s == "push"){
			int input;
			cin >> input;
			push(input);
		}
		if(s == "pop"){
			cout << pop() << "\n";
		}	
		if(s == "size"){
			cout << size() << "\n";
		}	
		if(s == "empty"){
			cout << empty() << "\n";
		}	
		if(s == "front"){
			cout << front() << "\n";
		}	
		if(s == "back"){
			cout << back() << "\n";
		}		
	}
		
	return 0;
}
