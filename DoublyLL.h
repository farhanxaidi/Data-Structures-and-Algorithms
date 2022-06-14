#pragma once
/*						Lecture 14
	Recap: 
			Singly Non-circular Linked List
			Singly Circular Linked List
	Today's Agenda:
			Doubly Non-circular Linked List
	Assignment 03:
			Doubly Circular Linked List
*/


template<class T>
struct Node {
	T data;
	Node<T>* next;
	Node<T>* prev;
	Node() {
		next = prev = nullptr;
	}
	Node(T val) {
		data = val;
		next = prev = nullptr;
	}
};
template<class X>
class DoublyLL
{
	Node<X>* head;
public:
	DoublyLL();
	DoublyLL(X);
	void DoublyLL<X>::insertAtFront(X);
	void DoublyLL<X>::insertAtEnd(X);
	void DoublyLL<X>::insert_After(Node<X>*, X);
	~DoublyLL();
};