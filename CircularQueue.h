#pragma once
#include <iostream>
using namespace std;

template <class T>
class CircularQueue
{
	T * list;
	int front;
	int rear;
	int maxSize;
	int count;
public:
	CircularQueue();
	CircularQueue(int);
	
	bool isEmpty() const;
	bool isFull() const;
	void enQueue(T);
	T deQueue();
	T frontElement() const;
	T rearElement() const;
	
	void display();
	~CircularQueue();
};