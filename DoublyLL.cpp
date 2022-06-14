#include "DoublyLL.h"

template<class X>
DoublyLL<X>::DoublyLL()
{
	head = nullptr;
}
template<class X>
DoublyLL<X>::DoublyLL(X _data)
{
	head = new Node;
	head->data = _data;
	head->next = nullptr;
	head->prev = nullptr;
}
template<class X>
void DoublyLL<X>::insertAtFront(X _data)
{
	//allocate memory for New node
	 Node<X>* newNode = new Node;

	//assign data to new node
	newNode->data = _data;

	//new node is head and previous is null, since we are adding at the front
	newNode->next = head;
	newNode->prev = nullptr;

	//previous of head is new node
	if (head != nullptr)
		head->prev = newNode;

	//head points to new node
	head = newNode;
}
template<class X>
void DoublyLL<X>::insertAtEnd(X _data)
{
	//allocate memory for node
	Node<X>* newNode = new Node;

	Node<X>* temp = head; //set temp node value to head

	//set data for new node
	newNode->data = _data;

	//new node is the last node , so set next of new node to null
	newNode->next = nullptr;

	//check if list is empty, if yes make new node the head of list
	if (head == nullptr) {
		newNode->prev = nullptr;
		head = newNode;
		return;
	}

	//otherwise traverse the list to go to last node
	while (temp->next != nullptr)
		temp = temp->next;

	//set next of last to new node
	temp->next = newNode;

	//set last to prev of new node
	newNode->prev = temp;
	return;
}
template<class X>
void DoublyLL<X>::insert_After(Node<X>* prev_node, X _data)
{
	//check if prev node is null
	if (prev_node == nullptr) {
		cout << "Previous node is required , it cannot be NULL";
		return;
	}
	//allocate memory for new node
	Node<X>* newNode = new Node;

	//assign data to new node
	newNode->data = _data;

	//set next of newnode to next of prev node
	newNode->next = prev_node->next;

	//set next of prev node to newnode
	prev_node->next = newNode;

	//now set prev of newnode to prev node
	newNode->prev = prev_node;

	//set prev of new node's next to newnode
	if (newNode->next != nullptr)
		newNode->next->prev = newNode;
}
template<class T>
DoublyLL<T>::~DoublyLL() {
}