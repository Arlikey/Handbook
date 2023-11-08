#pragma once
#include <iostream>
#include "Handbook.h"
using namespace std;

class List {

	class Node {
	public:
		Handbook contact;
		Node* pNext;
		Node(Handbook _contact) : contact(_contact), pNext(nullptr) {};
	};

	Node* head;
	Node* tail;
public:
	static int count;

	List() : head(nullptr), tail(nullptr) {};
	
	int get_count() {
		return count;
	}

	bool is_empty() {
		return head == nullptr;
	}

	void push_back(Handbook contact) {
		Node* ptr = new Node(contact);
		if ( is_empty() ) {
			head = ptr;
			tail = ptr;
			count++;
			return;
		}
		tail->pNext = ptr;
		tail = ptr;
		count++;
	}

	void print() {
		if (is_empty()) {
			return;
		}
		Node* ptr = head;
		while (ptr) {
			ptr->contact.Print();
			ptr = ptr->pNext;
		}
		cout << endl;
	}

	Node* operator[] (const int index) {
		if (is_empty()) return nullptr;
		Node* ptr = head;
		for (int i = 0; i < index; i++) {
			ptr = ptr->pNext;
			if (!ptr) return nullptr;
		}
		return ptr;
	}
};