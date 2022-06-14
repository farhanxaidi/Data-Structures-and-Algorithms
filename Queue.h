#pragma once
#include <iostream>
using namespace std;

template <class T>
class Queue
{
	T* list;
	int front;
	int rear;
	int maxSize;
	int count;
public:
	Queue();
	Queue(int);

	bool isEmpty() const;
	bool isFull() const;
	void enQueue(T);
	T deQueue();
	T frontElement() const;
	T rearElement() const;

	void display();
	~Queue();
};