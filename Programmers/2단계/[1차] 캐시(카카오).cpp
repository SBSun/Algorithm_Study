#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Node {
public:
	string city;
	Node* nextNode = NULL; // ���� ���
	Node* prevNode = NULL; // ���� ���
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
		// List�� ��������� head�� tail�� ����
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else { // ������� ������ ����
			head->prevNode = newNode;	// head�� prevNode�� newNode��
			newNode->nextNode = head;	// newNode�� nextNode�� head��
			head = newNode;				// head�� newNode��
		}
	}

	void Remove(Node* node) {
		size--;

		if (node == head) // ������ ��尡 head�� ���� head�� nextNode�� head��
			head = node->nextNode;
		if (node == tail) // ������ ��尡 tail�� ���� head�� prevNode�� head��
			tail = node->prevNode;
		if (node->prevNode != NULL) // ������ ��忡 prevNode�� �����ϸ� preNode�� nextNode�� ������ ����� nextNode�� ����
			node->prevNode->nextNode = node->nextNode;
		if (node->nextNode != NULL) // ������ ��忡 nextNode�� �����ϸ� nextNode�� preNode�� ������ ����� preNode�� ����
			node->nextNode->prevNode = node->prevNode;
		delete node;
	}

	Node* Search(string _city) {
		Node* ptr = head;
		while (ptr != NULL) {
			if (isEqual(ptr->city, _city))	// ã������ ��ȯ
				return ptr;

			ptr = ptr->nextNode; // ���� ���� �̵�
		}

		return NULL;
	}
	// ���ڿ� ��
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

		if (cityInCache == NULL) { // ���ο� ����
			answer += 5;

			if (cache.size < cacheSize) // ����Ʈ�� ������ �ִٸ� Add
				cache.AddNode(cities[i]);
			else if (cache.size == cacheSize && cacheSize > 0) { // ����Ʈ�� ������ ���ٸ� tailNode ���� �� Add
				cache.Remove(cache.tail);
				cache.AddNode(cities[i]);
			}
		}
		else { // �̹� �ִ� ���ô� ���� �� �߰�
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