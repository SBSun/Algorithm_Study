#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Node {
public:
	string city;
	Node* nextNode = NULL; // 다음 노드
	Node* prevNode = NULL; // 이전 노드
};

class LinkedList {
public:
	Node* head = NULL;
	Node* tail = NULL;
	int size = 0;

	void AddNode(string _city) {
		size++;

		Node* newNode = new Node;
		newNode->city = _city;
		// List가 비어있으면 head와 tail로 설정
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else { // 비어있지 않으면 스왑
			head->prevNode = newNode;	// head의 prevNode를 newNode로
			newNode->nextNode = head;	// newNode의 nextNode를 head로
			head = newNode;				// head을 newNode로
		}
	}

	void Remove(Node* node) {
		size--;

		if (node == head) // 삭제할 노드가 head면 현재 head의 nextNode를 head로
			head = node->nextNode;
		if (node == tail) // 삭제할 노드가 tail면 현재 head의 prevNode를 head로
			tail = node->prevNode;
		if (node->prevNode != NULL) // 삭제할 노드에 prevNode가 존재하면 preNode의 nextNode를 삭제할 노드의 nextNode로 설정
			node->prevNode->nextNode = node->nextNode;
		if (node->nextNode != NULL) // 삭제할 노드에 nextNode가 존재하면 nextNode의 preNode를 삭제할 노드의 preNode로 설정
			node->nextNode->prevNode = node->prevNode;
		delete node;
	}

	Node* Search(string _city) {
		Node* ptr = head;
		while (ptr != NULL) {
			if (isEqual(ptr->city, _city))	// 찾았으면 반환
				return ptr;

			ptr = ptr->nextNode; // 다음 노드로 이동
		}

		return NULL;
	}
	// 문자열 비교
	bool isEqual(string a, string b) {
		if(a.length() != b.length()) return false;

		for (int i = 0; i < a.length(); i++) {
			if (a[i] == b[i])
				continue;
			else if (a[i] - b[i] == 32 || a[i] - b[i] == -32)
				continue;

			return false;
		}

		return true;
	}
};

int solution(int cacheSize, vector<string> cities) {
	int answer = 0;

	LinkedList cache;

	for (int i = 0; i < cities.size(); i++) {
		Node* cityInCache = cache.Search(cities[i]);

		if (cityInCache == NULL) { // 새로운 도시
			answer += 5;

			if (cache.size < cacheSize) // 리스트에 공간이 있다면 Add
				cache.AddNode(cities[i]);
			else if (cache.size == cacheSize && cacheSize > 0) { // 리스트에 공간이 없다면 tailNode 제거 후 Add
				cache.Remove(cache.tail);
				cache.AddNode(cities[i]);
			}
		}
		else { // 이미 있는 도시는 삭제 후 추가
			answer += 1; 
			cache.Remove(cityInCache);
			cache.AddNode(cities[i]);
		}
	}

	return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cout << solution(3, { "Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul" }) << "\n";

	return 0;
}